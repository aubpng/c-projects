CC = gcc
CFLAGS = -Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -fsanitize=address,undefined
COPTS = -O0 -g -ggdb

RawBinaries = \
	helloworld \
	calculator \
	converter \
	movement

Binaries = $(patsubst %,build/bin/%,$(RawBinaries))

all: $(Binaries)

build/bin/%: %/main.c | build/bin/
	$(CC) -o $@ $< $(COPTS) $(CFLAGS)

build/bin/:
	mkdir -p $@
