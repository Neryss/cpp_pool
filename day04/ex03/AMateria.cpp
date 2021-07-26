#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
:_type(type)
{
	std::cout << "AMateria of type " << _type << "created" << std::endl;
}

AMateria::AMateria(const AMateria &other)
:_type(other._type)
{
	std::cout << "AMateria of type " << _type << "created by copy" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria of type " << _type << "destroyed" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "You shouldn't see this message..." << std::endl;
}
