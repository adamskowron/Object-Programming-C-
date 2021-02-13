#pragma once
#include "Figura.h"
class Romb :
	public Figura
{
private:
	int przekatna1, przekatna2,bok;
public:
	Romb(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d);

	void przedstaw_sie();
	virtual double pole();
	virtual double obwod();
};

