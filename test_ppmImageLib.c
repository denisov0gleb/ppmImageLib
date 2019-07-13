#include <stdio.h>
#include "ppmImageLib.h"


int main(int argc, const char *argv[])
{
	Color * red = CreateColor(255, 0, 0);
	Color * black = CreateColor(0, 0, 0);

	ppmImg * img1 = CreateImg(128, 128, 255);

	SetBackgroundColor(img1, red);

	for (int i = 0; i < img1->width; i++)
	{
		SetPixelColor(img1, i, i, black);
	}

	WriteImgToFile(img1, "test1.ppm");

	DeleteImg(img1);

	return 0;
}
