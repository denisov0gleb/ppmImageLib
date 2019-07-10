#include "color.h"

int CreateColor(Color * color, unsigned char red, unsigned char green, unsigned char blue)
{
	color->r = red;
	color->g = green;
	color->b = blue;

	return 0;
}


int Color8bit(Color * color24bit, Color * color8bit)
{
	color8bit->r = color24bit->r * 7 /255;
	color8bit->g = color24bit->g * 7 /255;
	color8bit->b = color24bit->b * 3 /255;

	return 0;
}
