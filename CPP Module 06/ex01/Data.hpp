#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef std::string str;

class Data
{
	private:

	public:
		Data();
		Data(const Data &copy);
		~Data();

		Data &operator =(const Data &copy);
};

#endif
