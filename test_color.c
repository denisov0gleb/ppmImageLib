#include <stdio.h>
#include "color.h"


int main(int argc, const char *argv[])
{
	fprintf(stdout, "Hello world!\n");

	Color c1;

	CreateColor(&c1, 0, 10, 20);
	fprintf(stdout, "Created color!\n");
	fprintf(stdout, "Red: %d Green: %d Blue: %d\n", c1.r, c1.g, c1.b);

	
	return 0;
}
