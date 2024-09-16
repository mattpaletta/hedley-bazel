#include <stdio.h>
#include "common.h"

int main() {
  printf("__INTEL_COMPILER: %d\n", __INTEL_COMPILER);
  printf("HEDLEY_INTEL_VERSION: %d (%d.%d.%d)\n",
    HEDLEY_INTEL_VERSION,
    HEDLEY_VERSION_DECODE_MAJOR(HEDLEY_INTEL_VERSION),
    HEDLEY_VERSION_DECODE_MINOR(HEDLEY_INTEL_VERSION),
    HEDLEY_VERSION_DECODE_REVISION(HEDLEY_INTEL_VERSION)
  );
  printf("HEDLEY_INTEL_VERSION_CHECK() = %d\n", HEDLEY_INTEL_VERSION_CHECK(20,21,7));
  printf("sizeof(void) = %d\n", sizeof(void));
}