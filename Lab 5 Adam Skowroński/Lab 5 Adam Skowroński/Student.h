#pragma once
#include <iostream>
#include <string>
#include "Grupa.h"

using namespace std;


class Student
{
private:
	string imie, nazwisko;
	int nr_albumu;
	float srednia;
	string* przedmioty;


public:
	int ilosc;

	Student(); // konstruktor bez pamaretru
	Student(int);  // konstruktor z parametrem
	Student(Student&); //konstruktor kopiujacy
	~Student(); //destruktor

	void ustaw();

	Student& operator=(Student&);
	friend ostream& operator<< (ostream& out, Student& right);
	friend istream& operator >> (istream& in, Student& right);


};
