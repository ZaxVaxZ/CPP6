#ifndef C_HPP
#define C_HPP

#include <iostream>

typedef std::string str;

class C
{
	private:

	public:
		C();
		C(const C &copy);
		~C();

		C &operator =(const C &copy);
};

#endif
