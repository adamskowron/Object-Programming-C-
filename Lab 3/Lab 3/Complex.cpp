#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

Complex::Complex(double  re, double  im)
{
	this->re = re;
	this->im = im;
}

 double Complex::modul(Complex & a)
{
	
	return sqrt(a.re*a.re+a.im*a.im);
}


ostream & operator<<(ostream & out, Complex & right)
{
	return (out<<"czesc rzeczywista: "<<right.re<<endl<<"czesc urojona: "<<right.im<<endl);
}

istream & operator >> (istream & in, Complex & right)
{
	cout << "Podaj czesc rzeczywista i urojona\n";
	return(in >> right.re >> right.im);
}

Complex operator+(Complex & left, Complex & right)
{
	return Complex(left.re + right.re, left.im + right.im);
}

Complex operator-(Complex & left, Complex & right)
{
	return Complex(left.re-right.re,left.im-right.im);
}

Complex operator*(Complex & left, Complex & right)
{
	return Complex(left.re*right.re-left.im*right.im,left.re*right.im+right.re*left.im);
}

bool operator<(Complex & left, Complex & right)
{
	if (Complex::modul(left) < Complex::modul(right))
		return true;
	else
	return false;
}

bool operator>(Complex & left, Complex & right)
{
	if (Complex::modul(left) > Complex::modul(right))
		return true;
	else
		return false;
}

bool operator==(Complex & left, Complex & right)
{
	if (left.re == right.re && left.im == right.im)
		return true;
	else
	return false;
}

