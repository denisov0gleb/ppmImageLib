# ppmImageLibrary

A simple and short library on ANSI C for creating images in PPM format (bitmap, true color, 24-bit).

## Usage

Just add ppmImageLib.[c, h] to your project and don't forget to compile ppmImageLib.c

Below is the test_ppmImageLib.c file, the output is the red image with black diagonal line and the
flipped image (make test):

```
#include <stdio.h>
#include "ppmImageLib.h"


int main(int argc, const char *argv[])
{
	Color * red = CreateColor(255, 0, 0);
	Color * redCopy = CreateColor(255, 0, 0);
	Color * black = CreateColor(0, 0, 0);

	fprintf(stdout, "\nList of standard functions for PPM image handling:\n\n");
	fprintf(stdout, "* Test ColorCompare function:\n\tred = red: %d\n\tred = black: %d\n", ColorCompare(red, redCopy), ColorCompare(red, black));

	ppmImg * img1 = CreateImg(100, 100, 255);
	fprintf(stdout, "* Created test image\n");

	SetBackgroundColor(img1, red);
	fprintf(stdout, "* Set background color\n");

	int i;
	for (i = 0; i < img1->width; i++)
	{
		SetPixelColor(img1, i, i, black);
	}
	fprintf(stdout, "* Set color of diagonal pixels\n");


	WriteImgToFile(img1, "test1.ppm");
	fprintf(stdout, "* Write test image file\n");

	FlipImageVertically(img1);
	fprintf(stdout, "* Flip image\n");

	WriteImgToFile(img1, "test2.ppm");
	fprintf(stdout, "* Write test flipped image file\n");

	fprintf(stdout, "* Test copying Colors from image and changing the source:\n");
	SetPixelColor(img1, 0, 0, red);
	Color * temp = GetPixelColor(img1, 0, 0);
	fprintf(stdout, "\tTemp color = %d, %d, %d\n", temp->r, temp->g, temp->b);
	SetPixelColor(img1, 0, 0, black);
	fprintf(stdout, "\tTemp color = %d, %d, %d\n", temp->r, temp->g, temp->b);

	DeleteImg(img1);
	fprintf(stdout, "* Delete image from memory\n");


	return 0;
}
```


## Built With

* [GNU-make](https://www.gnu.org/software/make/) - Makefile works fine on machines with GCC (for Linux or Mingw-64 for Windows).


## Authors

* **Gleb Denisov** - *Initial work* - [denisov0gleb](https://github.com/denisov0gleb)

## License

No LICENSE yet.
