#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

typedef std::string str;

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator =(const ScalarConverter &copy);

	public:
		~ScalarConverter();

		static void	convert(str s);
};

#endif
