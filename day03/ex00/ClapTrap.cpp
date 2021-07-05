#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:_name("bob"), _hitpoints(10), _mana(10), _ad(0)
{
	std::cout << "ClapTrap created using the default constr" << std::endl;
}
void	ClapTrap::attack(std::string const &name)
{
	std::cout << _name << " attacks " << name << ", causing " << _ad << " points of damage!" << std::endl;
}