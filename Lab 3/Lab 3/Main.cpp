#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char *argv[])
{
	//uzycie konstruktora do utworzenia i zainicjowania 2 obiektow klasy i ich wyswietlenie w konsoli
	Complex a (2, 3);  
	Complex b (3, 6);
	cout << a << b << endl;

	if (argc >= 2)		//sprawdzenie czy podano argumenty uruchomienia programu
	{				
		ifstream plik_we(argv[1]);
		if (plik_we.good())
		{
			plik_we >> a;		// odczyt z pliku do obiektow za pomoca przeciazonego operatora >>
			plik_we >> b;
			plik_we.close();
		}
		else
		{
			cout << "nastapil blad wczytania pliku\n";
		}

		ofstream plik_wy(argv[2]);
		if (plik_wy.good())			// jesli wczytano dane z pliku to program zapisze je do pliku podanego jako 2 argument uruchomienia 
		{							//za pomoca przeciazonego operatora <<
			plik_wy << a;
			plik_wy << b;
			plik_wy.close();
		}
		else
		{
			cout << "nastapil blad wczytania pliku lub nie podano pliku do zapisu\n";
		}
	}
		else
		{
			cout << "nie podano argumentu wczytania programu\npodaj dane recznie\n";
			cin >> a >> b;		//wczytanie nowych danych
		}
	
	cout << a << b << endl;

	cout <<"dodawanie liczb zespolonych\n" <<a + b;
	cout << "odejmowanie liczb zespolonych\n" << a - b;
	cout << "mnozenie liczb zespolonych\n" << a * b;
	cout << "dzialanie operatora >\n" << (a > b)<<endl;
	cout << "dzialanie operatora <\n" << (a < b) << endl;
	cout << "dzialanie operatora ==\n" << (a == b) << endl;

	system("pause");
	return 0;
}