#pragma once
#include "Student.h"
#include <fstream>

class Student;

class Grupa
{
private:
	Student* grupa;

public:
	int N;
	Grupa(int);
	Grupa(Grupa&);
	~Grupa();

	void dodaj(int);
	void wyswietl();
	void zapis(std::ostream& wyj);
};

