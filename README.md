# ppmImageLibrary

A simple and short library on ANSI C for creating images in PPM format (bitmap, true color, 24-bit).

## Usage

Just add ppmImageLib.[c, h] to your project and don't forget to compile ppmImageLib.c

Below is the test_ppmImageLib.c file, the output is the red image with black diagonal line:

```
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
```


## Built With

* [GNU-make](https://www.gnu.org/software/make/) - Makefile works fine on machines with GCC (for Linux or Mingw-64 for Windows).


## Authors

* **Gleb Denisov** - *Initial work* - [denisov0gleb](https://github.com/denisov0gleb)

## License

No LICENSE yet.
