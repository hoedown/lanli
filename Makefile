CFLAGS = -g -O3 -Wall -Wextra -Wno-unused-parameter -std=c99 -Isrc
LDFLAGS = -lrt

ifneq ($(OS),Windows_NT)
	CFLAGS += -fPIC
endif

HOEDOWN_SRC=\
	src/buffer.o \
	src/document.o \
	src/escape.o \
	src/version.o \
	src/callbacks/strict_post.o

.PHONY:		all test clean

all:		libhoedown.so hoedown

# Libraries

libhoedown.so: libhoedown.so.1
	ln -f -s $^ $@

libhoedown.so.1: $(HOEDOWN_SRC)
	$(LD) -shared $^ $(LDFLAGS) -o $@

libhoedown.a: $(HOEDOWN_SRC)
	$(AR) rcs libhoedown.a $^

# Executable

hoedown: bin/hoedown.o $(HOEDOWN_SRC)
	$(CC) $^ $(LDFLAGS) -o $@

# Perfect hashing

src/_html_entities.gperf: entities.json
	python tools/generate_entity_lookup.py < $^ > $@

src/_html_entities.h: src/_html_entities.gperf
	gperf -S1 -m100 -l -C -N find_entity -t $^ > $@

src/_element_type.h: src/_element_type.gperf
	gperf -S1 -m100 -l -C -7 -E -N match_element_type -t $^ > $@

src/callbacks/_strict_post_tags.h: src/callbacks/_strict_post_tags.gperf
	gperf -S1 -m100 -l -C -7 -E -N find_tag -t $^ > $@

# Testing

test: hoedown
	#TODO

# Housekeeping

clean:
	$(RM) src/*.o src/callbacks/*.o bin/*.o
	$(RM) libhoedown.so libhoedown.so.1 libhoedown.a
	$(RM) hoedown hoedown.exe

# Generic object compilations

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
