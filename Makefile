CC=gcc
CFLAGS=-Wwrite-strings
MAKEFLAGS += --silent

run: main.c
	make build && \
	./bin/target && \
	make clean

build: main.c
	mkdir -p ./bin && $(CC) $(CFLAGS) main.c -o ./bin/target

clean:
	rm -fr ./bin

help:
	echo -e "make\n\trun\n\tbuild\n\tclean"
