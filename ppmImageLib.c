#include <stdio.h>
#include <malloc.h>
#include "ppmImageLib.h"

/*****************************************
 * Color part
 ****************************************/
Color * CreateColor(unsigned char red, unsigned char green, unsigned char blue)
{
	Color * color = malloc(sizeof(Color));

	color->r = red;
	color->g = green;
	color->b = blue;

	return color;
}


/*****************************************
 * ppmImage part
 ****************************************/

/*
 * Usage:
 * 		ppmImg * img1 = CreateImg(4, 4, 255);
 */
ppmImg * CreateImg(int width, int height, int maxVal)
{
	ppmImg * img = malloc(sizeof(ppmImg));
	img->img = (int *) malloc(width * height * sizeof(int));
	img->width = width;
	img->height = height;
	img->maxVal = maxVal;
	img->format = "P3";

	return img;
}


int SetPixelColor(ppmImg * image, int x, int y, Color * color)
{
	*(image->img + x*image->width + y) = 1;

	return 0;
}


/*
 * Usage:
 * 		Color * c1 = GetPixelColor(img, x, y);
 */
Color * GetPixelColor(ppmImg * img, int x , int y)
{
	Color * color = malloc(sizeof(Color));

	return color;
}


int main()
{
	Color * red = CreateColor(1, 2, 3);
	fprintf(stdout, "Start!\n");
	ppmImg * img1 = CreateImg(4, 4, 255);
	fprintf(stdout, "Continue!\nwidth = %d, height = %d deep = %d\n", img1->width, img1->height, img1->maxVal);
	fprintf(stdout, "Format: %s\n", img1->format);
	fprintf(stdout, "Color: %d, %d, %d\n", red->r, red->g, red->b);

	SetPixelColor(img1, 1, 2, red);

	fprintf(stdout, "Image color: %d\n", *(img1->img + 1*img1->width + 2));
	fprintf(stdout, "Image color 0: %d\n", *(img1->img + 1*img1->width + 1));

	return 0;
}
