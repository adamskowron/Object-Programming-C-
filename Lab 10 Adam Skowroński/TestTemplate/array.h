#include "stdafx.h"
#include <iostream>
#include "MyException.h"

using namespace std;

template<class T>
class Array {

private:
	T *buf;
	int len;

public:
	Array(int size);
	Array(const Array<T> &a);
	~Array();

	T& operator[](int index) const;
	int length() const;
	
	// operator przypisania
	Array<T>& operator=(const Array<T> &a);

	Array<T> invert();		//metoda odwracajaca kolejnosc w tablicy
	
	Array<T> resize(int newsize);		//metoda zmieniajaca rozmiar tablicy

	Array<T> insert_behind(int number,T element);
													//metody wstawiajace elementy do tablicy po i przed zadanej liczbie liczac elementy tablicy od 0
	Array<T> insert_before(int number, T element); 
};

template<class T>
ostream& operator<<(ostream &o, const Array<T> &a);

// w ten sposob rozdzielamy implementacje na osobne pliki
#include "array.template.h"