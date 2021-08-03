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
	
}

void	identify(Base &p)
{

}

int main(void)
{
	Base	*rb = generate();
	delete rb;
	return (0);
}