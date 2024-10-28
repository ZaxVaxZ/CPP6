#include "Base.hpp"

Base::Base()
{
	std::cout << "An Base has been created!\n";
}

Base::Base(const Base &copy)
{
	std::cout << "An Base has been created with the same qualities as another!\n";
}

Base &Base::operator =(const Base &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

Base::~Base()
{
	std::cout << "The Base has been destroyed!\n";
}
