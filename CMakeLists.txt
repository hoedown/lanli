cmake_minimum_required (VERSION 2.6)
project (Lanli)

option (BUILD_SHARED_LIBS "Wether to build Lanli as a shared library" true)
option (BUILD_CLI "Wether to build the lanli executable" true)

set (FLAGS "-std=c99 -Wall -Wextra -Wno-unused-parameter")


# Pregenerated files
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
add_library(liblanli
  src/buffer.c
  src/document.c
  src/escape.c
  src/version.c
  src/callbacks/strict_post.c
)

set_target_properties(liblanli PROPERTIES
  COMPILE_FLAGS ${FLAGS}
  OUTPUT_NAME lanli
  SOVERSION 0
  VERSION 0.0.1
)

install(TARGETS liblanli DESTINATION lib)
install(DIRECTORY src/ DESTINATION include/lanli
  FILES_MATCHING PATTERN "*.h"
  PATTERN "_*" EXCLUDE
)


# Executables
if (BUILD_CLI)
  add_executable(lanli bin/lanli.c)
  target_link_libraries(lanli liblanli rt)

  set_target_properties(lanli PROPERTIES COMPILE_FLAGS ${FLAGS})
  include_directories(${PROJECT_SOURCE_DIR}/src)

  install(TARGETS lanli DESTINATION bin)

  get_target_property(LANLI_LOCATION lanli LOCATION)
  add_custom_target(test
    true
    DEPENDS lanli
  )
endif (BUILD_CLI)
