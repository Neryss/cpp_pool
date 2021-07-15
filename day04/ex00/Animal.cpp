#include "Animal.hpp"

Animal::Animal()
:_type("")
{
	std::cout << "Base animal of type [" << _type << "] created using default!" << std::endl;
}

Animal::Animal(std::string type)
:_type(type)
{
	std::cout << "Base animal of type [" << _type << "] created using type!" << std::endl;
}

Animal::Animal(const Animal &other)
:_type(other._type)
{
	std::cout << "Base animal of type [" << _type << "] created using another animal!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[" << _type << "] got deleted!" << std::endl;
}
