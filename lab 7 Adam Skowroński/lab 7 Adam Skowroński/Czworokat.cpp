#include "Czworokat.h"



Czworokat::Czworokat(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d)
{
	P1 = a;
	P2 = b;
	P3 = c;
	P4 = d;

	bok1= P1.odleglosc(P2);
	bok2= P1.odleglosc(P3);		//przypadkowe dobranie bokow 
	bok3= P2.odleglosc(P4);	
	bok4 = P3.odleglosc(P4);

}

void Czworokat::przedstaw_sie()
{
	cout << "czworokat" << endl;
}

double Czworokat::obwod()
{
	return bok1+bok2+bok3+bok4;
}

double Czworokat::pole()
{
	return sqrt((1 / 2 * obwod() - bok1)*(1 / 2 * obwod() - bok2)*(1 / 2 * obwod() - bok3)*(1 / 2 * obwod() - bok4));
}




