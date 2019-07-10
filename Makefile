CC = gcc

TARGET = main

COLOR_LIB = color.c
TEST_COLOR = test_color.c color.c
TEST_COLOR_TARGET = test_color

ifeq ($(OS),Windows_NT) 
	REMOVE = del /f
else
	REMOVE = rm -rf
endif


all: $(TARGET)

$(TARGET):
	$(CC) -o $(TARGET) main.c $(COLOR_LIB)

test_color:
	$(CC) -o $(TEST_COLOR_TARGET) $(TEST_COLOR)

clean:
	$(REMOVE) *.exe *.o
