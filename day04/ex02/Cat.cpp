#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "*meow meow* a cat has been created!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other),
_brain(new Brain(*other._brain))
{
	std::cout << "*meow meow* a cat has been copied!" << std::endl;
}

Cat::~Cat()
{
	delete	_brain;
	std::cout << "*purr purr* a cat went to sleep!" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		delete	_brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "*meow meow* oh wow! A cat has been cloned!" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "*meow meow* I'm a cat!" << std::endl;
}

void	Cat::printIdeas() const
{
	_brain->displayIdeas();
}

Brain	*Cat::getBrain()
{
	return (_brain);
}
