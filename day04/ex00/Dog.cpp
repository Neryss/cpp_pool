#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "*woof woof* a Dog has been created!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "*woof woof* a Dog has been copied!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "*woooooof* a Dog went to sleep!" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	_type = other._type;
	std::cout << "*woof woof* oh wow! A Dog has been cloned!" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*woof woof* I'm a Dog!" << std::endl;
}