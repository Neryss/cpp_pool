#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return (name);
}

void	Weapon::setType(std::string new_name)
{
	name = new_name;
}

Weapon::Weapon()
{
	name = "Kinda sus stick";
}

Weapon::~Weapon()
{
}
