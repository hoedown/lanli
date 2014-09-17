#include "version.h"

void lanli_version(int *major, int *minor, int *revision) {
  *major = LANLI_VERSION_MAJOR;
  *minor = LANLI_VERSION_MINOR;
  *revision = LANLI_VERSION_REVISION;
}
