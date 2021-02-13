#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double re, im;

public:
	Complex();

	Complex(double  re, double  im);    //konstruktor z parametrami

	static double modul(Complex& a);     //funkcja liczaca modul

										 //deklaracje przeciazen operatorow i jednoczesne zaprzyjaznienie ich z klasa
	Complex& operator=(Complex& right);
	Complex& operator=(int right);
	friend ostream& operator<<(ostream& out, Complex & right);
	friend istream& operator >> (istream& in, Complex& right);
	Complex operator+(Complex & right);
	Complex& operator+=(Complex & right);
	Complex operator- (Complex & right);
	Complex operator* (Complex &right);
	bool operator< (Complex &right);
	bool operator> (Complex &right);
	bool operator== (Complex &right);
};