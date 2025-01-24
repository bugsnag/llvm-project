#include "llvm/DebugInfo/Symbolize/BugsnagSymbolizeV1.h"
#include "llvm/DebugInfo/Symbolize/Symbolize.h"
#include "llvm/Object/ObjectFile.h"
#include <cstdlib>
#include <cstring>

using namespace llvm;

static void freeAndInvalidate(void** p) {
  free((void*)*p);
  *p = nullptr;
}

static void destroySymbolizeResult(SymbolizeResultV1* symbolizeResult) {
  if (!symbolizeResult) {
    return;
  }
  freeAndInvalidate((void**)&symbolizeResult->address);
  freeAndInvalidate((void**)&symbolizeResult->fileName);
  freeAndInvalidate((void**)&symbolizeResult->shortFunctionName);
  freeAndInvalidate((void**)&symbolizeResult->linkageFunctionName);
  freeAndInvalidate((void**)&symbolizeResult->symbolTableFunctionName);
}

static void destroySymbolizeResults(SymbolizeResultsV1* symbolizeResults) {
  if (!symbolizeResults) {
    return;
  }
  for (int i = 0; i < symbolizeResults->resultCount; i++) {
    destroySymbolizeResult(&symbolizeResults->results[i]);
  }
}

SymbolizeResultV1 getSymbolizeResult(const DILineInfo &info, std::string address, bool inlined, bool badAddress) {
  SymbolizeResultV1 result = {0};
  result.inlined = inlined;
  result.badAddress = badAddress;

  unsigned int len = std::strlen(address.c_str());
  result.address = new char[len];
  std::strcpy(result.address, address.c_str());
  
  len = std::strlen(info.FileName.c_str());
  result.fileName = new char[len];
  std::strcpy(result.fileName, info.FileName.c_str());

  len = std::strlen(info.ShortFunctionName.c_str());
  result.shortFunctionName = new char[len];
  std::strcpy(result.shortFunctionName, info.ShortFunctionName.c_str());

  len = std::strlen(info.LinkageFunctionName.c_str());
  result.linkageFunctionName = new char[len];
  std::strcpy(result.linkageFunctionName, info.LinkageFunctionName.c_str());

  len = std::strlen(info.SymbolTableFunctionName.c_str());
  result.symbolTableFunctionName = new char[len];
  std::strcpy(result.symbolTableFunctionName, info.SymbolTableFunctionName.c_str());

  result.line = info.Line;
  result.column = info.Column;
  result.startLine = info.StartLine;

  return result;
}

SymbolizeResultsV1 BugsnagSymbolizeV1(const char* filePath, bool includeInline, char* addresses[], int addressCount) {
  symbolize::LLVMSymbolizer::Options Opt;
  Opt.Demangle = false;
  symbolize::LLVMSymbolizer Symbolizer(Opt);

  SymbolizeResultsV1 retVal = {0};

  std::string moduleName(filePath);
  std::vector<SymbolizeResultV1> results;

  for (int i = 0; i < addressCount; i++) {
    std::string hexAddress = addresses[i];
    char* addressErr;
    uint64_t numericAddress = (uint64_t)std::strtoul(hexAddress.c_str(), &addressErr, 16);
    object::SectionedAddress moduleAddress = {numericAddress, object::SectionedAddress::UndefSection};

    if (includeInline) {
      auto ResOrErr = Symbolizer.symbolizeInlinedCode(moduleName, moduleAddress);
      if (ResOrErr) {
        for (int j = 0; j < ResOrErr.get().getNumberOfFrames(); j++) {
          SymbolizeResultV1 result = getSymbolizeResult(ResOrErr.get().getFrame(j), hexAddress, (j == 0) ? false: true, *addressErr != 0);
          results.push_back(result);
        }
      }
    } else {
      auto ResOrErr = Symbolizer.symbolizeCode(moduleName, moduleAddress);
      if (ResOrErr) {
        SymbolizeResultV1 result = getSymbolizeResult(ResOrErr.get(), hexAddress, false, *addressErr != 0);
        results.push_back(result);
      }
    }
  }

  retVal.resultCount = results.size();
  retVal.results = new SymbolizeResultV1[results.size()];
  std::copy(results.begin(), results.end(), retVal.results);

  return retVal;
}

void DestroySymbolizeResultsV1(SymbolizeResultsV1* symbolizeResults) {
  if (symbolizeResults) {
    destroySymbolizeResults(symbolizeResults);
  }
}
