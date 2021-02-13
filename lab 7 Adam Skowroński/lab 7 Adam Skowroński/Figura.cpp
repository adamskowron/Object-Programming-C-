#include "Figura.h"

Figura::Figura()
{

}

Figura::Figura(Wspolrzedne& a, Wspolrzedne& b, Wspolrzedne& c, Wspolrzedne& d)
{
	P1 = a;
	P2 = b;
	P3 = c;
	P4 = d;
}

void Figura::przedstaw_sie()
{
	cout << "Jakas figura";
}

double Figura::obwod()
{
	return 0;
}

double Figura::pole()
{
	return 0;
}



string Figura::rozpoznaj()
{		
	double tab[6];
	tab[0] = P1.odleglosc(P2);
	tab[1] = P1.odleglosc(P3);
	tab[2] = P1.odleglosc(P4);
	tab[3] = P2.odleglosc(P3);
	tab[4] = P2.odleglosc(P4);
	tab[5] = P3.odleglosc(P4);

	std::sort(tab, tab + 6); // sortowanie rosnaco

	if (tab[0] == tab[1] == tab[2] == tab[3] && tab[4] == tab[5])
	{
		return "kwadrat";
	}
	else if ((tab[0] == tab[1] == tab[2] == tab[3] && tab[4] != tab[5]) || (tab[1] == tab[2] == tab[3] == tab[4] && tab[0] != tab[5]))
	{
		return "romb";
	}
	else if (((tab[0] == tab[1] && tab[2] == tab[3]) && (tab[4] == tab[5])) || ((tab[0] == tab[3] && tab[2] == tab[1]) && tab[4] == tab[5]))
	{
		return "prostokat";
	}
	else
		return "czworokat";
	
}
