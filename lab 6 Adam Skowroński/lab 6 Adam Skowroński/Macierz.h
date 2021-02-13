#pragma once
#include <iostream>
#include "Complex.h"

using namespace std;
class Wektor;

class Macierz
{
private:
	Complex **tablica;
public:
	Macierz();  //konstruktor bez parametrow tworzy macierz wypelniona zerami
	Macierz(ifstream& plik);   //konstruktor z plikiem jako parametr
	Macierz(Macierz& a); // konstruktor kopiujacy
	~Macierz();		//destruktor usuwajacy pamiec przydzielona dynamiczne

	Macierz operator* (const Macierz &right);

	Macierz& operator=(const Macierz& right);

	friend ostream & operator<<(ostream & out, const Macierz & right);

	friend Wektor operator*(const Macierz &m, const Wektor &w);

};