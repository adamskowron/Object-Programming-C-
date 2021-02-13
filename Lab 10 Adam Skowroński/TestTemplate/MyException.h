#pragma once
#include <string>
#include<iostream>
class MyException
{ 
private:
	std::string error;
public:
	MyException();
	void show();
};

