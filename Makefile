CC = gcc
CFLAGS = -o

EXECUTABLE = main

COLOR_LIB = color.c
TEST_COLOR = test_color.c color.c
TEST_COLOR_EXECUTABLE = test_color


ifeq ($(OS),Windows_NT) 
	REMOVE = del /f
else
	REMOVE = rm -rf
endif


all: $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) $(CFLAGS) $(EXECUTABLE) main.c $(COLOR_LIB)

test_color:
	$(CC) $(CFLAGS) $(TEST_COLOR_EXECUTABLE) $(TEST_COLOR)

clean:
	$(REMOVE) *.exe *.o $(EXECUTABLE) $(TEST_COLOR_EXECUTABLE)
