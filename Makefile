CC=gcc
CFLAGS=-Wwrite-strings

run: main.c
	GREEN='\033[0;32m' && \
	NC='\033[0m' && \
	make build && \
	printf "Running program --------------------------\n\n${GREEN}" && \
	./bin/target && \
	printf "\n${NC}End of program  --------------------------\n" && \
	make clean

build: main.c
	mkdir -p ./bin && $(CC) $(CFLAGS) main.c -o ./bin/target

clean:
	rm -fr ./bin

