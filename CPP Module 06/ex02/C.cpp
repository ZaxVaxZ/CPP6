#include "C.hpp"

C::C()
{
	std::cout << "An C has been created!\n";
}

C::C(const C &copy)
{
	std::cout << "An C has been created with the same qualities as another!\n";
}

C &C::operator =(const C &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

C::~C()
{
	std::cout << "The C has been destroyed!\n";
}
