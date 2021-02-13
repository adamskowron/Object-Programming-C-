#include "Grupa.h"
#include "Student.h"

using namespace std;

Grupa::Grupa(int n)
{
	grupa = new Student[n];

	for (int i = 0; i < n; i++)
	{
		cout << "podaj ile przedmiotow ma miec utworzony obiekt student  numer " << i+1 << endl;
		cin >> grupa[i].ilosc;
		grupa[i].ustaw();
		cin >> grupa[i];
	}
}

Grupa::Grupa(Grupa &a)
{
	grupa = new Student(N);
	for (int i = 0; i < N; i++)
		grupa[i] = a.grupa[i];
}

Grupa::~Grupa()
{
	delete[] grupa;
}

void Grupa::dodaj(int liczba)
{
	N += 1;
	Student* tab_tymczasowa = new Student[N];

	for (int i = 0; i < (Grupa::N - 1); i++)
	{
		tab_tymczasowa[i] = grupa[i];
	}
	tab_tymczasowa[N] = Student(liczba);
	delete[] grupa;
	grupa = tab_tymczasowa;
}

void Grupa::wyswietl()
{
	for (int i = 0; i < Grupa::N; i++)
	{
		cout << grupa[i] << endl;
	}
}

void Grupa::zapis(ostream& wyj)
{
	if (wyj.good())
	{
		for (int i = 0; i < Grupa::N; i++)
		{
			wyj << grupa[i];
		}
	}
}


