#include "Wspolrzedne.h"



Wspolrzedne::Wspolrzedne()
{
	x = 0;
	y = 0;
}


Wspolrzedne::Wspolrzedne(int a,int b)
{
	x = a;
	y = b;
}

Wspolrzedne& Wspolrzedne::operator=(Wspolrzedne & right)
{
	x = right.x;
	y = right.y;

	return *this;
}



double Wspolrzedne::odleglosc(Wspolrzedne &a)
{
	return sqrt((x-a.x)*(x - a.x)+(y-a.y)*(y-a.y));
}

istream & operator >> (istream & in, Wspolrzedne & a)
{
	cout << "podaj wspolrzedna x i y"<<endl;
	in >> a.x >> a.y;
	return in;
}
