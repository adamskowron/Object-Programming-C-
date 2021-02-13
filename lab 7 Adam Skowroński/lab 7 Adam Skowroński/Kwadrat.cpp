#include "Kwadrat.h"


Kwadrat::Kwadrat(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d)
{
	P1 = a;
	P2 = b;
	P3 = c;
	P4 = d;
	if (P1.odleglosc(P2) == P1.odleglosc(P3) || P1.odleglosc(P2) == P1.odleglosc(P4))
		this->bok = P1.odleglosc(P2);

	else if (P1.odleglosc(P3) == P1.odleglosc(P4))
		this->bok = P1.odleglosc(P3);

	this->przekatna = sqrt(2 * bok*bok);

}

void Kwadrat::przedstaw_sie()
{
	cout << "kwadrat"<<endl;
}




double Kwadrat::obwod()
{
	return 4*bok;
}

double Kwadrat::pole()
{
	return bok*bok;
}

