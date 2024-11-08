#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

typedef std::string str;

class ScalarConverter
{
	private:
		enum dataType
		{
			INT,
			CHAR,
			FLOAT,
			DOUBLE,
			INFVAL,
			NANVAL,
			IMPOSSIBLE
		};
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator =(const ScalarConverter &copy);
		dataType	detectType(str s);

	public:
		~ScalarConverter();

		static void	convert(str s);
};

#endif
