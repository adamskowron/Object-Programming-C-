#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double re, im;
	
public:
	Complex (double  re, double  im);    //konstruktor z parametrami

	static double modul(Complex& a);     //funkcja liczaca modul
	
	//deklaracje przeciazen operatorow i jednoczesne zaprzyjaznienie ich z klasa
	friend ostream& operator<<(ostream& out, Complex & right);
	friend istream& operator >> (istream& in, Complex& right);
	friend Complex operator+(Complex & left, Complex & right);
	friend Complex operator- (Complex& left, Complex & right);
	friend Complex operator* (Complex &left, Complex &right);
	friend bool operator< (Complex &left, Complex &right);
	friend bool operator> (Complex &left, Complex &right);
	friend bool operator== (Complex &left, Complex &right);
};