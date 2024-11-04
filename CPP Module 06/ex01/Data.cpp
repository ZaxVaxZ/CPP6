#include "Data.hpp"

Data::Data(): _i(0), _c(0), _f(0)
{
	
}

Data::Data(int i, char c, float f): _i(i), _c(c), _f(f)
{

}

Data::Data(const Data &copy): _i(copy.get_i()), _c(copy.get_c()), _f(copy.get_f())
{
	
}

int Data::get_i() const
{
	return _i;
}

char Data::get_c() const
{
	return _c;
}

float Data::get_f() const
{
	return _f;
}

Data &Data::operator =(const Data &copy)
{
	if (&copy != this)
	{
		_i = copy.get_i();
		_c = copy.get_c();
		_f = copy.get_f();
	}
	return *this;
}

std::ostream &operator <<(std::ostream &o, Data &d)
{
	o << "---------------\n";
	o << "Data in object:\n";
	o << "Int: "   << d.get_i() << std::endl;
	o << "Char: "  << d.get_c() << std::endl;
	o << "Float: " << d.get_f() << std::endl;
	o << "---------------\n";
	return o;
}

Data::~Data()
{
	
}
