#pragma once
#include <string>
#include <algorithm>
#include <iostream>
#include "Wspolrzedne.h"
#include <cmath>

using namespace std;

class Figura
{
protected:
	string nazwa;
	Wspolrzedne P1,P2,P3,P4;
	string kolor;
public:
	Figura();
	Figura(Wspolrzedne&, Wspolrzedne&, Wspolrzedne&, Wspolrzedne&);
	virtual void przedstaw_sie();
	virtual double obwod();
	virtual double pole();

	string rozpoznaj();		//rozpoznaje figure
};
