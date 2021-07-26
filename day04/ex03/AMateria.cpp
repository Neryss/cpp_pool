#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
:_type(type)
{
}

AMateria::AMateria(const AMateria &other)
:_type(other._type)
{
}

AMateria::~AMateria()
{
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
