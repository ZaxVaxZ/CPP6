#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	{
		Data *d = new Data(22, '6', 19.98);
		std::cout << d << "\n";
		std::cout << Serializer::serialize(d) << "\n";
		std::cout << Serializer::deserialize(Serializer::serialize(d)) << "\n";
		d = Serializer::deserialize(Serializer::serialize(d));
		std::cout << *d << "\n";
		delete d;
	}
	return (0);
}
