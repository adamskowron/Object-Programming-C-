#pragma once
#include "Figura.h"
class Czworokat :
	public Figura
{
private:
	int bok1, bok2, bok3, bok4;
public:
	Czworokat(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d);

	void przedstaw_sie();
	virtual double obwod();
	virtual double pole();
};

