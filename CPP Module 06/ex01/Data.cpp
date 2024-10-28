#include "Data.hpp"

Data::Data()
{
	std::cout << "An Data has been created!\n";
}

Data::Data(const Data &copy)
{
	std::cout << "An Data has been created with the same qualities as another!\n";
}

Data &Data::operator =(const Data &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

Data::~Data()
{
	std::cout << "The Data has been destroyed!\n";
}
