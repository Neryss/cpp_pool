#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	scavi("Clapi");
	ScavTrap	enemy("bad-scavi");
	ScavTrap	clone("clone");
	ScavTrap	test(enemy);

	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.guardGate();
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.beRepaired(enemy.get_ad() / 2);
	enemy.guardGate();
	test.guardGate();
	test = clone;
	test.guardGate();
	return (0);
}