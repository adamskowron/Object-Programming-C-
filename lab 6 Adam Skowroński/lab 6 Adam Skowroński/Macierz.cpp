#include <iostream>
#include <fstream>
#include "Macierz.h"

using namespace std;

Macierz::Macierz()
{
	tablica = new Complex *[4];
	for (int i = 0; i < 4; i++)
	{
		tablica[i] = new Complex[4];
		for (int j = 0; j < 4; j++)
			tablica[i][j] = 0;
	}
}

Macierz::Macierz(ifstream &plik)
{
	tablica = new Complex *[4];
	for (int i = 0; i < 4; i++)
	{
		tablica[i] = new Complex[4];
		for (int j = 0; j < 4; j++)
		{
			plik >> tablica[i][j];
		}
	}
}

Macierz::Macierz(Macierz & a)
{

	this->tablica = new Complex *[4];
	for (int i = 0; i < 4; i++)
	{
		tablica[i] = new Complex[4];
		for (int j = 0; j < 4; j++)
		{
			this->tablica[i][j] = a.tablica[i][j];
		}

	}

}

Macierz::~Macierz()
{
	for (int i = 0; i < 4; i++)
		delete[] tablica[i];
	delete[] tablica;
	tablica = NULL;
}

Macierz Macierz::operator*(const Macierz &right)
{
	Macierz wynik;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
				wynik.tablica[i][j] += (tablica[i][k] * right.tablica[k][j]);
		}
	}
	return wynik;
}

Macierz& Macierz::operator=(const Macierz& right)
{
	if (this == &right)
	{
		return *this;
	}
	else
	{
		tablica = new Complex*[4];
		for (int i = 0; i < 4; i++)
		{
			tablica[i] = new Complex[4];
			for (int j = 0; j < 4; j++)
				tablica[i][j] = right.tablica[i][j];
		}
		return *this;
	}
}

ostream & operator<<(ostream & out, const Macierz & right)
{
	cout << "Zawartosc macierzy:\n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout.width(6);
			out << right.tablica[i][j] << "\t";
			if (j == 3)
				out << endl;
		}
	}
	return out;
}