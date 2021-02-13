#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	przedmioty = nullptr;
}

Student::Student(int a)
{
	ilosc = a;
	przedmioty = new string[ilosc];

	for (int i = 0; i < ilosc; i++)
	{
		cout << "Podaj przedmiot numer " << ilosc << endl;
		cin >> przedmioty[i];
	}
}

Student::Student(Student &copy)
{
	przedmioty = new string[copy.ilosc];
	for (int i = 0; i < ilosc; i++)
	{
		przedmioty[i] = copy.przedmioty[i];
	}
}

Student::~Student()
{
	if(przedmioty != nullptr)
	delete[] przedmioty;
}

Student& Student::operator=(Student &a)
{
	przedmioty = new string[a.ilosc];
	for (int i = 0; i < a.ilosc; i++)
	{
		przedmioty[i] = a.przedmioty[i];
	}
	return *this;
}


ostream& operator<<(ostream & out, Student & right)
{
	out << "wyswietlenie zawatrartosci obiektu \"studnet\"";
	out << "imie:" << right.imie<<endl;
	out << "nazwisko:" << right.nazwisko << endl;
	out.setf(ios::hex, ios::basefield);
	out << "numer albumu:" << right.nr_albumu << endl;
	out.precision(2);
	out << "srednia" << right.srednia << endl;
	for (int i = 0; i < right.ilosc; i++)
	{
		out << "przedmioty" << right.przedmioty[i] << endl;
	}
	

	return out;
}

istream& operator >> (istream & in, Student & right)
{
	cout << "podaj imie\n";
	in >> right.imie;
	cout << "podaj nazwisko\n";
	in >> right.nazwisko;
	cout << "podaj numer albumu\n";
	in >> right.nr_albumu;
	cout << "podaj srednia\n";
	in	>> right.srednia;
	for (int i = 0; i < right.ilosc; i++)
	{
		cout << "podaj przedmiot numer " << i+1<<endl;
		in >> right.przedmioty[i];
	}
	return in;
}

