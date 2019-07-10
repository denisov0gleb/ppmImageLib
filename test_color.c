#include <stdio.h>
#include "color.h"


int main(int argc, const char *argv[])
{
	Color red, blue, green;

	CreateColor(&red, 255, 0, 0);
	CreateColor(&green, 0, 255, 0);
	CreateColor(&blue, 0, 0, 255);
	fprintf(stdout, "Created colors!\n");
	fprintf(stdout, "Red: %d-%d-%d\nGreen: %d-%d-%d\nBlue: %d-%d-%d\n", red.r, red.g, red.b, green.r, green.g, green.b, blue.r, blue.g, blue.b);
	
	return 0;
}
