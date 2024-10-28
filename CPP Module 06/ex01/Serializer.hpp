#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef std::string str;

class Serializer
{
	private:

	public:
		Serializer();
		Serializer(const Serializer &copy);
		~Serializer();

		Serializer &operator =(const Serializer &copy);
};

#endif
