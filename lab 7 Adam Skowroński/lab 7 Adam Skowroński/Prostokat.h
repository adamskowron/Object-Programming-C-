#pragma once
#include "Figura.h"
class Prostokat :
	public Figura
{
private:
	int bok1, bok2,przekatna;

public:
	Prostokat(Wspolrzedne&, Wspolrzedne&, Wspolrzedne&, Wspolrzedne&);

	void przedstaw_sie();
	virtual double obwod();
	virtual double pole();
};

