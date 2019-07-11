typedef struct ppmImg
{
	int width;
	int height;
	int deep;
	char format[2];
} ppmImg;

int writeppmImage(ppmImg * img, char * fileName, char * format);
