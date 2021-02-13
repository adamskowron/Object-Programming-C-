#pragma once
#include <cmath>
#include <iostream>

using namespace std;

class Wspolrzedne
{
private:
	int x;
	int y;
public:
	Wspolrzedne();
	Wspolrzedne(int a,int b);
	Wspolrzedne& operator=(Wspolrzedne& right);
	friend istream& operator>>(istream& in,Wspolrzedne& a);

	double odleglosc(Wspolrzedne&);
	
};

