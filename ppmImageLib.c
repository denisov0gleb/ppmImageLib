#include <stdio.h>
#include <stdlib.h>
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


int SetPixelColor(ppmImg * img, int x, int y, Color * color)
{
	*(int *) ptrImg(img, x, y) = 1;

	return 0;
}


int * ptrImg(ppmImg * img, int x, int y)
{
	return (int *) (img->img + y*img->width + x);
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

	SetPixelColor(img1, 1, 2, red);

	fprintf(stdout, "Image color: %d\n", *(int *)ptrImg(img1, 1, 2) );
	fprintf(stdout, "Test Image color: %d\n", *(int * )ptrImg(img1, 1, 2));

	return 0;
}
