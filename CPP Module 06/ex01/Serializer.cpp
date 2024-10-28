#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "An Serializer has been created!\n";
}

Serializer::Serializer(const Serializer &copy)
{
	std::cout << "An Serializer has been created with the same qualities as another!\n";
}

Serializer &Serializer::operator =(const Serializer &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "The Serializer has been destroyed!\n";
}
