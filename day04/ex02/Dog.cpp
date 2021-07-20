#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "*woof woof* a Dog has been created!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	_brain = new Brain();
	*_brain = Brain(*other._brain);
	std::cout << "*woof woof* a Dog has been copied!" << std::endl;
}

Dog::~Dog()
{
	if (_brain)
		delete (_brain);
	std::cout << "*woooooof* a Dog went to sleep!" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain;
		*_brain = Brain(*other._brain);
	}
	std::cout << "*woof woof* oh wow! A Dog has been cloned!" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*woof woof* I'm a Dog!" << std::endl;
}
