#ifndef B_HPP
#define B_HPP

#include <iostream>

typedef std::string str;

class B
{
	private:

	public:
		B();
		B(const B &copy);
		~B();

		B &operator =(const B &copy);
};

#endif
