#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "<" << _type << "> created" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "<" << _type << "> copied" << std::endl;
}

Cure::~Cure()
{
	std::cout << "cure deleted" << std::endl;
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
