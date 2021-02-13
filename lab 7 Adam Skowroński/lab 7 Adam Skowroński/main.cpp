#include <iostream>
#include <cstdlib>
#include <string>
#include "Figura.h"
#include "Wspolrzedne.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Romb.h"
#include "Czworokat.h"

using namespace std;

void PokazFigure(Figura *a)
{
	a->przedstaw_sie();

	cout << endl << "obwod wynosi:" << endl;
	cout.precision(3);
	cout << a->obwod() << endl;
	cout << "pole wynosi:" << endl;
	cout << a->pole() << endl;
}

int main()
{
	

	Wspolrzedne P1, P2, P3, P4;
	cin >> P1 >> P2 >> P3 >> P4;
	
	Figura a(P1,P2,P3,P4);
	Figura* wsk;
	string sprawdzenie = a.rozpoznaj();
	if (sprawdzenie == "kwadrat")
	{
		Kwadrat kwadrat(P1,P2,P3,P4);
		wsk = &kwadrat;
	}
	else if (sprawdzenie == "prostokat")
	{
		Prostokat prostokat(P1, P2, P3, P4);
		wsk = &prostokat;
	}
	else if (sprawdzenie == "romb")
	{
		Romb romb(P1, P2, P3, P4);
		wsk = &romb;
	}
	else
	{
		Czworokat czworokat(P1, P2, P3, P4);
		wsk = &czworokat;
	}
	
	PokazFigure(wsk);   

	
	std::system("pause");
	return 0;
}