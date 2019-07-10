#ifndef COLOR_H
#define COLOR_H

typedef struct Color
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
} Color;


int CreateColor(Color * color, unsigned char red, unsigned char green, unsigned char blue);

int Color8bit(Color * color24bit, Color * color8bit);

#endif /* COLOR_H */
