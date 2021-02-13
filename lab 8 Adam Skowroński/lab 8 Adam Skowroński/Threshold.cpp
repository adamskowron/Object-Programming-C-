#include "Threshold.h"

Threshold::Threshold(int threshold)
{
	this->threshold = threshold;
}

Image Threshold::Process(Image & in)
{
	Image a(in);

	for (int i = 0; i < a.height; i++)
	{
		for (int j = 0; j < a.width; j++)
		{
			if (a.pixels[i][j] <= this->threshold)
			{
				a.pixels[i][j] = 0;
			}
			else
			{
				a.pixels[i][j] = a.max;
			}
		}
	}
	return a;
}
