#include "color.h"

int CreateColor(Color * color, unsigned char red, unsigned char green, unsigned char blue)
{
	color->r = red;
	color->g = green;
	color->b = blue;

	return 0;
}
