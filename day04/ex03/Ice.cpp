#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

// Not sure
Ice::Ice(const Ice &other) : AMateria(other)
{
}

Ice::~Ice()
{
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

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
