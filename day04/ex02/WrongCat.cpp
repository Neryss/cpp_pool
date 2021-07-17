#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "*meow meow* a Wrongcat has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "*meow meow* a Wrongcat has been copied!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "*purr purr* a Wrongcat went to sleep!" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	std::cout << "*meow meow* oh wow! A Wrongcat has been cloned!" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "*meow meow* I'm a Wrongcat!" << std::endl;
}
