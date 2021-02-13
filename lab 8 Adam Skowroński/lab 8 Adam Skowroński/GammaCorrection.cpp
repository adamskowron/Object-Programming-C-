#include "GammaCorrection.h"
#include<cmath>

GammaCorrection::GammaCorrection(double a)
{
	this->gammacorrection = a;
}

Image GammaCorrection::Process(Image & in)
{
	Image a(in);

	for (int i = 0; i < a.height; i++)
	{
		for (int j = 0; j < a.width; j++)
		{
			a.pixels[i][j] = pow((a.pixels[i][j] / a.max), (1 / this->gammacorrection))*a.max;
		}
	}
	return a;
}
