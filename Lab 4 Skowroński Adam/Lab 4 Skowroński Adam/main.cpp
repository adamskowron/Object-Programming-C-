#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Macierz.h"
#include "Wektor.h"

using namespace std;

int main(int argc, char *argv[])
{
	ifstream wej;
	if (argc == 2)
	{
		
		wej.open(argv[1]);
		if (wej.good())
		{
			Macierz m1(wej);
			Macierz m2(wej);
			Wektor w1(wej);
			Wektor w2(wej);
			if (wej.fail())  //sprawdzenie czy nie wystapil blad w strumieniu w pliku wejsciowym podczas wypelniania obiektow
			{
				cout << "niepoprawne dane w pliku wczytanym lub za malo danych\nprogram zakonczy sie";
				exit(1);
			}
			else
			{
				Macierz wynik1;
				Wektor wynik2;
				int wynik3;

				wynik1 = m1*m2;
				wynik2 = m1*w1;
				wynik3 = w1*w2;
				cout << m1 << m2 << w1 << w2;
				cout << "mnozenie 2 macierzy:\n" << wynik1 << endl;
				cout << "mnozenie macierzy i wektora\n" << wynik2 << endl;
				cout << "mnozenie wektorow\n" << wynik3 << endl;
				
			}
		}
		else
			cout << "blad otwarcia pliku z liczbami";
	}
	else
		cout << "nie wczytano pliku z liczbami\n";

	wej.close();

	std::system("pause");
	return 0;
}