#include "version.h"

void lanli_version(int *ver_major, int *ver_minor, int *ver_revision) {
  *ver_major = LANLI_VERSION_MAJOR;
  *ver_minor = LANLI_VERSION_MINOR;
  *ver_revision = LANLI_VERSION_REVISION;
}
