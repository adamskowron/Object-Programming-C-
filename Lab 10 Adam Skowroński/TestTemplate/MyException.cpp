#include "stdafx.h"
#include "MyException.h"


MyException::MyException()
{
	this->error="BLAD";
}

void MyException::show()
{
	std::cout<<this->error<<std::endl;
}

