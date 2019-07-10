#ifndef COLOR_H
#define COLOR_H

typedef struct Color
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
} Color;


int CreateColor(Color * color, unsigned char red, unsigned char green, unsigned char blue);

#endif /* COLOR_H */
