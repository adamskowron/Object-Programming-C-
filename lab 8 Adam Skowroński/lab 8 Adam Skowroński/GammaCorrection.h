#pragma once
#include "Processor.h"

class GammaCorrection :
	public Processor
{
private:
	double gammacorrection;
public:
	GammaCorrection(double);
	
	Image Process(Image& in) override;
};

