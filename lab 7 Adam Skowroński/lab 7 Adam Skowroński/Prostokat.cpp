#include "Prostokat.h"



Prostokat::Prostokat(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d)
{
	P1 = a;
	P2 = b;
	P3 = c;
	P4 = d;

	if (P1.odleglosc(P2) < P1.odleglosc(P3) < P1.odleglosc(P4) || P1.odleglosc(P3) < P1.odleglosc(P2) < P1.odleglosc(P4))
	{
		bok1 = P1.odleglosc(P2);
		bok2 = P1.odleglosc(P3);
		przekatna = P1.odleglosc(P4);
	}
	else if (P1.odleglosc(P2) < P1.odleglosc(P4) < P1.odleglosc(P3) || P1.odleglosc(P4) < P1.odleglosc(P2) < P1.odleglosc(P3))
	{
		bok1 = P1.odleglosc(P2);
		bok2 = P1.odleglosc(P4);
		przekatna = P1.odleglosc(P3);
	}
	else
	{
		bok1 = P1.odleglosc(P3);
		bok2 = P1.odleglosc(P4);
		przekatna = P1.odleglosc(P2);
	}
}


void Prostokat::przedstaw_sie()
{
	cout << "prostokat" << endl;
}

double Prostokat::obwod()
{
	return 2*bok1+2*bok2;
}

double Prostokat::pole()
{
	return bok1*bok2;
}

