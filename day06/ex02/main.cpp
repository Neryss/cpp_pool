#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <time.h>

Base	*generate(void)
{
	Base	*bas;
	srand(time(NULL));
	int random = rand() % 3;
	std::cout << random << std::endl;
	if (random % 3 == 0)
		return (bas = new A);
	else if (random % 3 == 1)
		return (bas = new B);
	else if (random % 3 == 2)
		return (bas = new C);
	return (nullptr);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try 
	{
		Base &buf = dynamic_cast<A&>(p);
		(void)buf;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e)
	{}
	try
	{
		Base &buf = dynamic_cast<B&>(p);
		(void)buf;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e)
	{}
	try
	{
		Base &buf = dynamic_cast<C&>(p);
		(void)buf;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e)
	{}
}

int main(void)
{
	Base	*rb = generate();
	identify(rb);
	identify(*rb);
	delete rb;
	return (0);
}