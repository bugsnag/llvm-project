#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SymbolizeResultV1 {
  char* address;
  bool inlined;
  char* fileName;
  char* shortFunctionName;
  char* linkageFunctionName;
  char* symbolTableFunctionName;
  int line;
  int column;
  int startLine;
  bool badAddress;
} SymbolizeResultV1;

typedef struct SymbolizeResultsV1 {
  int resultCount;
  SymbolizeResultV1* results;
} SymbolizeResultsV1;

SymbolizeResultsV1 BugsnagSymbolizeV1(const char* filePath, bool includeInline, char* addresses[], int addressCount);
void DestroySymbolizeResultsV1(SymbolizeResultsV1* symbolizeResults);

#ifdef __cplusplus
}
#endif
