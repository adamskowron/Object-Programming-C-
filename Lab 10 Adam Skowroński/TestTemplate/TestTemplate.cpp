#include "stdafx.h"
#include "array.h"

int main()
{
	/*
	* Przyklady utworzenia konkretnych instancji szablonu. a przechowuje
	* tablice 4 elementow typu int. Dynamicznie stworzony obiekt b przechowuj 
	* tablice 3 elementow typu double.
	*/

	Array<int> a(4);
	Array<double> *b = new Array<double>(3);
	Array<string> c(3);	

	a[0] = 5;
	a[1] = 3;
	a[2] = 4;
	a[3] = 6;

	(*b)[0] = 1.4;
	(*b)[1] = 2.2;
	(*b)[2] = 3.3;

	c[0] = "abc";
	c[1] = "def";
	c[2] = "xyz";

	a.invert();		// wywolanie dla int
	c.invert();		// wywolanie dla string
	try
	{
		cout << a[9]; 
	}
	catch (MyException)
	{
		MyException a;
		a.show();
	};

	try
	{
		a.insert_behind(2, 8);
		c.insert_before(3, "ABC");
	}
	catch (MyException)
	{
		MyException a;
		a.show();
	};
	

	cout << a << endl;
	cout << *b << endl;
	cout << c << endl;

	getchar();

	delete b;
	
	return 0;
}

