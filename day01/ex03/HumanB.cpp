#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &n_weapon)
{
	weapon = &n_weapon;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " doesn't have any weapon" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}