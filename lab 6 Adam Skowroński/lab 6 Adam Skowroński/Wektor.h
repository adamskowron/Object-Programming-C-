#pragma once
#include <iostream>
#include "Complex.h"

class Macierz;

using namespace std;

class Wektor
{
private:
	Complex *wektor;

public:
	Wektor();  //konstruktor bez parametrow tworzy wektor wypelniona zerami
	Wektor(ifstream& plik);   //konstruktor z plikiem jako parametr
	Wektor(Wektor& a); // konstruktor kopiujacy
	~Wektor();	//destruktor usuwajacy pamiec przydzielona dynamiczne

	Complex operator*(const Wektor &w);

	Wektor& operator=(const Wektor &right);

	friend ostream & operator<<(ostream & out, const Wektor & right);

	friend Wektor operator*(const Macierz &m, const Wektor &w);

};