#ifndef A_HPP
#define A_HPP

#include <iostream>

typedef std::string str;

class A
{
	private:

	public:
		A();
		A(const A &copy);
		~A();

		A &operator =(const A &copy);
};

#endif
