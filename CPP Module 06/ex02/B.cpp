#include "B.hpp"

B::B()
{
	std::cout << "An B has been created!\n";
}

B::B(const B &copy)
{
	std::cout << "An B has been created with the same qualities as another!\n";
}

B &B::operator =(const B &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

B::~B()
{
	std::cout << "The B has been destroyed!\n";
}
