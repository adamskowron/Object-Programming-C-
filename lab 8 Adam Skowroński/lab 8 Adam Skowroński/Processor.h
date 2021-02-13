#pragma once
#include "Image.h"

class Processor
{
public:
	virtual Image Process(Image& in) = 0;
};

