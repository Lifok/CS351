#Compiler
CC = gcc

# Paths
SRC_PATH = src/
BIN_PATH = bin/
RELEASE_PATH = release/
LIB_PATH = lib/graphlib/

#Objects
OBJECTS = $(BIN_PATH)main.o $(BIN_PATH)dessine.o $(BIN_PATH)graphlib.o

#Release
EXEC = $(RELEASE_PATH)main

# Linker Flags
# LFLAGS = -lX11 -L/usr/X11R6/lib (ESISAR)
LFLAGS = -lX11 -L/usr/include/X11

CFLAGS = -Wall

all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC) $(LFLAGS)

$(BIN_PATH)main.o: $(SRC_PATH)main.c
	$(CC) $(CFLAGS) -c -o $(BIN_PATH)main.o $^

$(BIN_PATH)dessine.o:  $(SRC_PATH)dessine.c
	$(CC) $(CFLAGS) -c -o $(BIN_PATH)dessine.o $^

$(BIN_PATH)graphlib.o: $(LIB_PATH)graphlib.c
	$(CC) -c -o $(BIN_PATH)graphlib.o $^

clean:
	rm $(OBJECTS) $(EXEC)
