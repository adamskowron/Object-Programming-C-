#include "Invert.h"

Image Invert::Process(Image& in)
{
	Image a(in);
	for (int i = 0; i < a.height; i++)
	{
		for (int j = 0; j < a.width; j++)
		{
			a.pixels[i][j] = a.max - a.pixels[i][j];
		}
	}
	return a;
}
