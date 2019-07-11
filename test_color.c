#include <stdio.h>
#include "color.h"


int main(int argc, const char *argv[])
{
	FILE* ppmimg;
	ppmimg = fopen("ppmimg40x40.ppm", "wb");

	// Writing Magic Number to the File
	fprintf(ppmimg, "P6\n");

	// Writing Width and Height
	fprintf(ppmimg, "%d %d\n", 40, 40);

	// Writing the maximum gray value
	fprintf(ppmimg, "255\n");

	for (int i = 1; i < 41; i++)
	{
		for (int j = 1; j < 41; j++)
		{
			fprintf(ppmimg, "%c%c%c", i*6, j*6, (i+j)*3);
		}
	}

	return 0;
}
