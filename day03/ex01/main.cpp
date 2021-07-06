#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapi("clapi");
	// ClapTrap	clone(clapi);
	// ClapTrap	enemy("enemy");
	ScavTrap	test("yo");

	// clapi.attack("clone");
	// enemy.takeDamage(clapi.get_ad());
	// enemy.beRepaired(1);
	// enemy.attack("clapi");
	// clapi.takeDamage(clapi.get_ad());
	test.attack("yikes");
	test.guardGate();
	test.displayStats();
	clapi.attack("yo");
	test.takeDamage(clapi.get_ad());
	test.guardGate();
	return (0);
}