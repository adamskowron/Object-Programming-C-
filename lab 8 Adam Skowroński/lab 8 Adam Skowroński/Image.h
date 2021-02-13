#pragma once
#include <iostream>
#include <string>

using namespace std;

class Image
{
private:
	string comment, sign;
	unsigned int width;
	unsigned int height;
	unsigned int max;
	unsigned int** pixels;
public:
	Image();
	Image(Image& a);
	~Image();

	
	Image& operator=(Image&);
	friend ostream& operator<<(ostream& out, Image& left);
	void Allocate();
	friend istream& operator >> (istream& in, Image& left);
	friend class Invert;
	friend class Threshold;
	friend class GammaCorrection;
};

