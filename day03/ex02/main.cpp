#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	scavi("Clapi");
	ScavTrap	enemy("bad-scavi");

	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.guardGate();
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.beRepaired(enemy.get_ad() / 2);
	enemy.guardGate();
	return (0);
}