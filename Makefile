CC = gcc
CFLAGS = -o

EXECUTABLE = main

LIBS = ppmImageLib.c
TEST_PPMIMAGELIB = test_ppmImageLib.c ppmImageLib.c
EXECUTABLE_PPMIMAGELIB = ppmImageLib


ifeq ($(OS),Windows_NT) 
	REMOVE = del /f
else
	REMOVE = rm -rf
endif


all: $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) $(CFLAGS) $(EXECUTABLE) main.c $(LIBS)

ppmImageLib:
	$(CC) $(CFLAGS) $(EXECUTABLE_PPMIMAGELIB) $(TEST_PPMIMAGELIB)

clean:
	$(REMOVE) *.exe *.o $(EXECUTABLE) $(EXECUTABLE_PPMIMAGELIB)
