#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	Cure	*clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
