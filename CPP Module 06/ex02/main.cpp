#include <iostream>
#include <cmath>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

Base *generate(void)
{
	int	obj_type = rand() % 3;
	switch(obj_type)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base *p)
{
	A *ap = dynamic_cast<A*>(p);
	B *bp = dynamic_cast<B*>(p);
	C *cp = dynamic_cast<C*>(p);
	if (ap)
		std::cout << "Pointing to an A object!\n";
	else if (bp)
		std::cout << "Pointing to a  B object!\n";
	else if (cp)
		std::cout << "Pointing to a  C object!\n";
	else
		std::cout << "Pointing to something else!\n";
}

void identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Referencing an A object!\n";
	}
	catch (std::exception &e)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << "Referencing a  B object!\n";
		}
		catch (std::exception &e)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << "Referencing a  C object!\n";
			}
			catch (std::exception &e)
			{
				std::cout << "Referencing something else!\n";
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	Base	*gen;
	for(int i = 0; i < 10; i++)
	{
		gen = generate();
		identify(gen);
		identify(*gen);
		delete gen;
		std::cout << "============" << i + 1 << "============\n";
	}
	identify(NULL);
	gen = new D();
	identify(gen);
	identify(*gen);
	delete gen;
	return (0);
}
