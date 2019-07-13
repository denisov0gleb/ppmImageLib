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

	img->img = malloc(width * height * sizeof(Color));
	img->imgPtr = &img->img;

	img->width = width;
	img->height = height;
	img->maxVal = maxVal;
	img->format = "P3";

	return img;
}


void SetPixelColor(ppmImg * img, int x, int y, Color * color)
{
	img->img[arr2D(img, x, y)] = *color;
}


/*
 * Return integer as index made from 2D array
 */
int arr2D(ppmImg * img, int x, int y)
{
	return (int) (y*img->width + x);
}


void SetBackgroundColor(ppmImg * img, Color * color)
{
	for (int i = 0; i < img->width; i++)
	{
		for (int j = 0; j < img->height; j++)
		{
			SetPixelColor(img, i, j, color);
		}
	}
}


/*
 * Usage:
 * 		Color * c1 = GetPixelColor(img, x, y);
 */
Color * GetPixelColor(ppmImg * img, int x , int y)
{
	return &img->img[arr2D(img, x, y)];
}


void WriteImgToFile(ppmImg * img, char * fileName)
{
	FILE * imgFile;
	imgFile = fopen(fileName, "wb");
	fprintf(imgFile, "%s\n%d %d\n%d\n", img->format, img->width, img->height, img->maxVal);

	for (int x = 0; x < img->width; x++)
	{
		for (int y = 0; y < img->height; y++)
		{
			fprintf(imgFile, "%d %d %d\n", img->img[arr2D(img, x, y)].r, img->img[arr2D(img, x, y)].g, img->img[arr2D(img, x, y)].b);
		}
	}

	fclose(imgFile);
}


void DeleteImg(ppmImg * img)
{
	free(img->img);
	free(img);
}
