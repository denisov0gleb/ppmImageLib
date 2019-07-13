#ifndef PPMIMAGELIB_H
#define PPMIMAGELIB_H

/*****************************************
 * Color part
 ****************************************/
typedef struct Color
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
} Color;


Color * CreateColor(unsigned char red, unsigned char green, unsigned char blue);


/*****************************************
 * ppmImage part
 ****************************************/
typedef struct ppmImg
{
	Color * img;
	Color **imgPtr;
	int width;
	int height;
	int maxVal;
	char * format;
} ppmImg;


ppmImg * CreateImg(int width, int height, int maxVal);

/*
 * Return integer as index made from 2D array
 */
int arr2D(ppmImg * img, int x, int y);

void SetPixelColor(ppmImg * img, int x, int y, Color * color);

void SetBackgroundColor(ppmImg * img, Color * color);

Color * GetPixelColor(ppmImg * img, int x , int y);

void WriteImgToFile(ppmImg * img, char * fileName);

//int ReadImgFromFile(ppmImg * img, char * fileName);

void DeleteImg(ppmImg * img);

#endif /* PPMIMAGELIB_H */
