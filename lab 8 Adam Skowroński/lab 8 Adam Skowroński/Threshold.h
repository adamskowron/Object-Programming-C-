#pragma once
#include "Processor.h"
class Threshold :
	public Processor
{
private:
	int threshold;
public:
	Threshold(int threshold);

	Image Process(Image& in) override;
};

