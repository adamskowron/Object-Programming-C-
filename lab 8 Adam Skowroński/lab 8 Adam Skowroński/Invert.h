#pragma once
#include "Processor.h"
class Invert :
	public Processor
{
public:

	Image Process(Image& in) override;
};

