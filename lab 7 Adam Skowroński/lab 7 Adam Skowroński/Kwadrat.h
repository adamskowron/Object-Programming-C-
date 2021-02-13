#pragma once
#include "Figura.h"
class Kwadrat : public Figura
{
private:
	int bok,przekatna;

public:
	Kwadrat(Wspolrzedne&, Wspolrzedne&, Wspolrzedne&, Wspolrzedne&);
	
 void przedstaw_sie();

 virtual double obwod();
 virtual double pole();

};

