#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

typedef std::string str;

class Base
{
	private:

	public:
		Base();
		Base(const Base &copy);
		~Base();

		Base &operator =(const Base &copy);
};

#endif
