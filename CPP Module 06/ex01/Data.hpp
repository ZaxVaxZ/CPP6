#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef std::string str;

class Data
{
	private:
		int		_i;
		char	_c;
		float	_f;
	public:
		Data();
		Data(int i, char c, float f);
		Data(const Data &copy);
		~Data();

		int		get_i() const;
		char	get_c() const;
		float	get_f() const;

		Data &operator =(const Data &copy);
};

std::ostream &operator <<(std::ostream &o, Data &d);

#endif
