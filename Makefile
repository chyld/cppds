CC=g++
CFLAGS=-c -g -O0 -Wall -std=c++14

all: cppds

cppds: clean node ll master
	$(CC) ./build/*.o  -o ./build/cppds

master:
	$(CC) $(CFLAGS) master.cpp -o ./build/master.o

node:
	$(CC) $(CFLAGS) ./lib/node.cpp -o ./build/node.o

ll:
	$(CC) $(CFLAGS) ./lib/ll.cpp -o ./build/ll.o

clean:
	rm -f ./build/*
