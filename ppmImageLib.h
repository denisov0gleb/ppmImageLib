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
	int * img;
	int width;
	int height;
	int maxVal;
	char * format;
} ppmImg;


ppmImg * CreateImg(int width, int height, int maxVal);

int SetPixelColor(ppmImg * img, int x, int y, Color * color);

Color * GetPixelColor(ppmImg * img, int x , int y);

int SetBackgroundColor(ppmImg * img, Color * color);

Color * GetBackgroundColor(ppmImg * img);

int WriteImgToFile(ppmImg * img, char * fileName);

//int ReadImgFromFile(ppmImg * img, char * fileName);

int DeleteImg(ppmImg * img);

#endif /* PPMIMAGELIB_H */
