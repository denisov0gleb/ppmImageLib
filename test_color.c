#include <stdio.h>
#include "color.h"


int main(int argc, const char *argv[])
{
	Color red, green, blue;
	Color red1, green1, blue1;

	CreateColor(&red, 255, 0, 0);
	CreateColor(&green, 0, 255, 0);
	CreateColor(&blue, 0, 0, 255);

	Color8bit(&red, &red1);
	Color8bit(&green, &green1);
	Color8bit(&blue, &blue1);

	//fprintf(stdout, "Standart red: %d-%d-%d\nSmall red: %d-%d-%d\n", red.r, red.g, red.b, red1.r, red1.g, red1.b);

	FILE* ppmimg;
	ppmimg = fopen("ppmimg2.ppm", "wb");

	// Writing Magic Number to the File
	fprintf(ppmimg, "P6\n");

	// Writing Width and Height
	fprintf(ppmimg, "%d %d\n", 3, 1);

	// Writing the maximum gray value
	fprintf(ppmimg, "255\n");

	fprintf(ppmimg, "%c\n", red1.r << 5 + red1.g << 2 + red1.b);
	fprintf(ppmimg, "%c\n", green1.r << 5 + green1.g << 2 + green1.b);
	fprintf(ppmimg, "%c\n", blue1.r << 5 + blue1.g << 2 + blue1.b);

	fclose(ppmimg);

	return 0;
}
