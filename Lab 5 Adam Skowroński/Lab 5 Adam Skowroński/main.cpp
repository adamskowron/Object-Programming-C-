#include <iostream>
#include <conio.h>
#include "Student.h"
#include "Grupa.h"
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	char zapytanie=0;
	while (1)
	{
		cout << "podaj liczbe obiektow \"student\" do utworzenia\t";
		int a;
		cin >> a;
		Grupa test(a);

	
		if (argc > 1)
		{
			ofstream plik;
			plik.open(argv[1]);
			test.zapis(plik);
		}
		test.wyswietl();
		cout << "wcisnij ESC aby zakonczyc program lub dowolny inny klawisz zeby wprwadzic nowe obiekty \"student\"\n";
		zapytanie = _getch();
		if (zapytanie == 27)
		{
			break;
		}
		
			cout << "podaj liczbe przedmiotow obiektu \"student\"\n";
			int b;
			cin >> b;
			test.dodaj(b);

	}
	system("pause");
}