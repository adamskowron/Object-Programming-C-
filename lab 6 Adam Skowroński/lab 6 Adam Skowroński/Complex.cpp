#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double  re, double  im)
{
	this->re = re;
	this->im = im;
}

double Complex::modul(Complex & a)
{
	return sqrt(a.re*a.re + a.im*a.im);
}


Complex & Complex::operator=(Complex & right)
{
	re = right.re;
	im = right.im;
	return *this;
}

Complex & Complex::operator=(int right)
{
	re = right;
	im = right;
	return *this;
}

ostream & operator<<(ostream & out, Complex & right)
{
	return (out << right.re << " " << right.im << "i");
}

istream & operator >> (istream & in, Complex & right)
{
	return(in >> right.re >> right.im);
}

Complex Complex::operator+(Complex & right)
{
	return Complex(re + right.re, im + right.im);
}

Complex& Complex::operator+=(Complex & right)
{
	re += right.re;
	im += right.im;
	return *this;
}

Complex Complex::operator-(Complex & right)
{
	return Complex(re - right.re, im - right.im);
}

Complex Complex::operator*(Complex & right)
{
	return Complex(re*right.re - im*right.im, re*right.im + right.re* im);
}

bool Complex::operator<(Complex & right)
{
	if (Complex::modul(*this) < Complex::modul(right))
		return true;
	else
		return false;
}

bool Complex::operator>(Complex & right)
{
	if (Complex::modul(*this) > Complex::modul(right))
		return true;
	else
		return false;
}

bool Complex::operator==(Complex & right)
{
	if (re == right.re && im == right.im)
		return true;
	else
		return false;
}


