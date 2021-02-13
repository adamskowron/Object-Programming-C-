#include "Romb.h"



Romb::Romb(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d)
{
	P1 = a;
	P2 = b;
	P3 = c;
	P4 = d;

	if (P1.odleglosc(P2) == P1.odleglosc(P3))
	{
		bok = P1.odleglosc(P2);
		przekatna1 = P1.odleglosc(P4);
		przekatna2 = P2.odleglosc(P3);
	}
	else if (P1.odleglosc(P2)==P1.odleglosc(P4))
	{
		bok = P1.odleglosc(P2);
		przekatna1 = P1.odleglosc(P3);
		przekatna2 = P2.odleglosc(P4);
	}
	else
	{
		bok = P1.odleglosc(P3);
		przekatna1 = P3.odleglosc(P4);
		przekatna2 = P1.odleglosc(P2);
	}
}

void Romb::przedstaw_sie()
{
	cout << "romb" << endl;
}

double Romb::pole()
{
	return przekatna1*przekatna2*1/2;
}

double Romb::obwod()
{
	return 4*bok;
}



