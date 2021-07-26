#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "<" << _type << "> created" << std::endl;
}

// Not sure
Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << "<" << _type << "> copied" << std::endl;
}

Ice::~Ice()
{
	std::cout << "ice deleted" << std::endl;
}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	Ice	*clone = new Ice(*this);
	return (clone);
}

void	Ice::use(Character &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
