//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>


/*
CreateImg(ppmImage ppmImg, int width, int height);
SetPixel(ppmImage ppmImg, int x, int y, Color color);
SetColor(Color color, int r, int g, int b);
*/

typedef struct ppmImage
{
	int width;
	int height;
} ppmImg;


/*
int main(int argc, char *argv[])
{
	int width, height, *img;

	if ( argc >= 3 )
	{
		width = atoi(argv[1]);
		height = atoi(argv[2]);
	}
	else
	{
		width = 4;
		height = 4;
	}

	img = (int*)malloc(width * height * sizeof(int));

	int a = 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == j)
			{
				*(img + i*width + i) = a;
				a++;
			}
		}
	}

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			fprintf(stdout, "%d ", *(img + y*width + x) );
		}
		fprintf(stdout, "\n");
	}

	return 0;
}
*/
