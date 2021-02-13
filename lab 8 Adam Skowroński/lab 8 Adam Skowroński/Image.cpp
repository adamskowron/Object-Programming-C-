#include "Image.h"



Image::Image(): max(0)
{
	width = 0;
	height = 0;
	pixels = nullptr;
}


Image::Image(Image& left)
{
	
	width = left.width;
	height = left.height;
	comment = left.comment;
	sign = left.sign;
	max = left.max;
		pixels = new unsigned int*[height];
		for (int i = 0; i < height; i++)
		{
			pixels[i] = new unsigned int[width];
			for (int j = 0; j < width; j++)
				pixels[i][j] = left.pixels[i][j];
		}
}


Image::~Image()
{
	if (pixels != nullptr)
	{
		for (int i = 0; i < height; i++)
		{
			delete[] pixels[i];
		}
		delete[] pixels;
		pixels = nullptr;
	}
}

Image& Image::operator=(Image & left)
{
	
	width = left.width;
	height = left.height;
	comment = left.comment;
	sign = left.sign;
	max = left.max;
	pixels = new unsigned int*[height];
	for (int i = 0; i < height; i++)
	{
		pixels[i] = new unsigned int[width];
		for (int j = 0; j < width; j++)
		{
			pixels[i][j] = left.pixels[i][j];
		}
	}
	return *this;
}

void Image::Allocate()
{
	pixels = new unsigned int*[height];
	for (int i = 0; i < height; i++)
	{
		pixels[i] = new unsigned int[width];
	}
}

ostream & operator<<(ostream & out, Image & left)
{
	out<<left.sign<<endl<<left.comment<<endl<< left.width <<" " << left.height<<endl<<left.max<<endl;

	for (int j = 0; j < left.height; j++)
	{
		for (int i = 0; i < left.width; i++)
		{
			out << left.pixels[i][j]<<" ";
		}

		out << std::endl;
	}
	return out;
}

istream & operator >> (istream & in, Image & left)
{
	getline(in, left.sign);
	getline(in, left.comment);
	in>>left.width>>left.height>>left.max;

	left.Allocate();

	for (int j = 0; (j < left.height) && (!in.eof()); j++)
	{
		for (int i = 0; i < left.width; i++)
		{
			in>>left.pixels[i][j];
		}
	}
	return in;
}
