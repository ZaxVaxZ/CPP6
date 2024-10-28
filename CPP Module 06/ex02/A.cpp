#include "A.hpp"

A::A()
{
	std::cout << "An A has been created!\n";
}

A::A(const A &copy)
{
	std::cout << "An A has been created with the same qualities as another!\n";
}

A &A::operator =(const A &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

A::~A()
{
	std::cout << "The A has been destroyed!\n";
}
