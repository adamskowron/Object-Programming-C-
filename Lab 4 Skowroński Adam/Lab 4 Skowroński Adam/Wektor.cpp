#include <iostream>
#include<fstream>
#include "Wektor.h"
#include "Macierz.h"

using namespace std;


Wektor::Wektor()
{

	wektor = new int[4];
	for (int i = 0; i < 4; i++)
	{
		wektor[i] = 0;
	}
}

Wektor::Wektor(ifstream &plik)
{
	wektor = new int[4];
	for (int i = 0; i < 4; i++)
	{
		plik >> wektor[i];
	}
}

Wektor::Wektor(Wektor & a)
{
	wektor = new int[4];
	for (int i = 0; i < 4; i++)
	{
		wektor[i] = a.wektor[i];
	}
}

Wektor::~Wektor()
{
	delete[] wektor;
	wektor = NULL;
}

int Wektor::operator*(const Wektor & right)
{
	int wynik=0;
	for (int i = 0; i < 4; i++)
	{
		wynik += wektor[i] * right.wektor[i];
	}
	return wynik;
}

Wektor & Wektor::operator=(const Wektor & right)
{
	if (this == &right)
	{
		return *this;
	}
	else
	{
		wektor = new int[4];
		for (int i = 0; i < 4; i++)
		{
			wektor[i] = right.wektor[i];
		}

		return *this;	}
}

ostream & operator<<(ostream & out,const Wektor & right)
{
	cout << "zawartosc wektora:\n";
		for (int i = 0; i < 4; i++)
		{
			out << right.wektor[i] << endl;
		}
		return out;
}

Wektor operator*(const Macierz & m,const Wektor & w)
{
	Wektor wynik;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			wynik.wektor[i] += m.tablica[i][j] * w.wektor[j];
		}
	}
	return wynik;
}

