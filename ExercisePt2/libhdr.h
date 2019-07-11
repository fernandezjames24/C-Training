#include "libhdr.h"
#include "iostream"

void defvoid(int a)
{
	std::cout << __FUNCTION__ << __argc << "void" << std::endl;
}

char defchar(char a)
{
	std::cout << __FUNCTION__ << __argc << "char" << std::endl;
	return 0;
}

int defint(int a)
{
	std::cout << __FUNCTION__ << __argc << "int" << std::endl;
	return 0;
}

float deffloat(float a)
{
	std::cout << __FUNCTION__ << __argc << "float" << std::endl;
	return 0.0f;
}
	
