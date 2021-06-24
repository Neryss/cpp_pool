#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &n_weapon)
{
	weapon = n_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanB::~HumanB()
{
}