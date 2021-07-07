#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapi("clapi");
	ClapTrap	clone(clapi);
	ClapTrap	enemy("enemy");

	clapi.attack("clone");
	enemy.takeDamage(clapi.get_ad());
	enemy.beRepaired(1);
	enemy.attack("clapi");
	clapi.takeDamage(clapi.get_ad());
	clapi = enemy;
	clapi.attack("enemy");
	return (0);
}