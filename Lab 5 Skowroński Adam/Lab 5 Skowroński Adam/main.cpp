#include <iostream>
#include <conio.h>
#include "Student.h"
#include "Grupa.h"
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	char zapytanie;
	while (zapytanie != 27)
	{
		cout << "podaj liczbe obiektow \"student\" do utworzenia\t";
		int a;
		cin >> a;
		Grupa test(a);

		test.wyswietl();
		if (argc > 1)
		{
			ofstream plik;
			plik.open(argv[1]);
			test.zapis(plik);
		}		
		cout << "wcisnij ESC aby zakonczyc program lub dowolny inny klawisz zeby wprwadzic nowe obiekty \"student\"\n";
		zapytanie = _getch();
		cout<< "podaj liczbe obiektow \"student\" do dodania\t";
		int ile;
		cin >> ile;
		for (int i = 0; i < ile; i++)
			{
			cout << "podaj liczbe przedmiotow obiektu \"student\"\n";
			int a;
			cin>> a;
		test.dodaj(a);
	}

	}
	system("pause");
}