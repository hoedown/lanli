cmake_minimum_required (VERSION 2.6)
project (Hoedown)

option (BUILD_SHARED_LIBS "Wether to build Hoedown as a shared library" true)
option (BUILD_CLI "Wether to build the hoedown executable" true)

set (FLAGS "-std=c99 -Wall -Wextra -Wno-unused-parameter")


# Pregenerated files
# FIXME: is this multiplatform?
add_custom_target(html_entities.gperf
  python tools/generate_entity_lookup.py < data/entities.json > data/html_entities.gperf
)
add_custom_target(_html_entities.h DEPENDS html_entities.gperf
  gperf -S1 -m100 -l -C -N find_entity -t data/html_entities.gperf > src/_html_entities.h
)
add_custom_target(_element_type.h
  gperf -S1 -m100 -l -C -7 -E -N match_element_type -t data/element_type.gperf > src/_element_type.h
)
add_custom_target(_strict_post_tags.h
  gperf -S1 -m100 -l -C -7 -E -N find_tag -t data/strict_post_tags.gperf > src/callbacks/_strict_post_tags.h
)


# Library
add_library(libhoedown
  src/buffer.c
  src/document.c
  src/escape.c
  src/version.c
  src/callbacks/strict_post.c
)

set_target_properties(libhoedown PROPERTIES
  COMPILE_FLAGS ${FLAGS}
  OUTPUT_NAME hoedown
  SOVERSION 0
  VERSION 0.0.1
)

install(TARGETS libhoedown DESTINATION lib)
install(DIRECTORY src/ DESTINATION include/hoedown
  FILES_MATCHING PATTERN "*.h"
  PATTERN "_*" EXCLUDE
)


# Executables
if (BUILD_CLI)
  add_executable(hoedown bin/hoedown.c)
  target_link_libraries(hoedown libhoedown rt)

  set_target_properties(hoedown PROPERTIES COMPILE_FLAGS ${FLAGS})
  include_directories(${PROJECT_SOURCE_DIR}/src)

  install(TARGETS hoedown DESTINATION bin)
endif (BUILD_CLI)
