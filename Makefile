CC=g++
CFLAGS=-c -g -O0 -Wall -std=c++14

all: cppds

cppds: clean list master
	$(CC) list.o master.o -o cppds

master:
	$(CC) $(CFLAGS) master.cpp

list:
	$(CC) $(CFLAGS) ./lib/list.cpp

clean:
	rm -rf *.o cppds
