#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
:_type("")
{
	std::cout << "Base WrongAAnimal of type [" << _type << "] created using default!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
:_type(type)
{
	std::cout << "Base WrongAnimal of type [" << _type << "] created using type!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
:_type(other._type)
{
	std::cout << "Base WrongAnimal of type [" << _type << "] created using another WrongAnimal!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[" << _type << "] got deleted as a WrongAnimal!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*makes natural and generic WrongAnimal noises*" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return (_type);
}
