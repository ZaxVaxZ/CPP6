#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}

ScalarConverter::dataType ScalarConverter::detectType(str s)
{
	int		i;
	bool	f;

	if (s.length() == 1)
	{
		if (std::isdigit(s[0]))
			return (INT);
		return (CHAR);
	}
	if (s.length() >= 3 && std::tolower(s[0]) == 'n'
		&& std::tolower(s[1]) == 'a' && std::tolower(s[2]) == 'n'
		&& ((std::tolower(s[3]) == 'f' && s[4] == '\0') || s[3] == '\0'))
		return (NANVAL);
	i = (s[0] == '-') + (s[0] == '+');
	if (s.length() >= 3 + i && std::tolower(s[i]) == 'i'
		&& std::tolower(s[i + 1]) == 'n' && std::tolower(s[i + 2]) == 'f'
		&& s[i + 3] == '\0')
		return (INFVAL);
	f = false;
	while (i < s.length())
	{
		if (!std::isdigit(s[i]))
		{
			43.0i;
			if (s[i] == '.' && !f)
				f = true;
			else
				break;
		}
		i++;
	}
	
	if (f)
		return (FLOAT);
	

}

void ScalarConverter::convert(str s)
{
	
}

ScalarConverter &ScalarConverter::operator =(const ScalarConverter &copy)
{
	(void) copy;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	
}
