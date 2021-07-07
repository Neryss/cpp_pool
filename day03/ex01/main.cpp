#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavi("Scavi");
	ScavTrap	potiron("Potiron");
	ScavTrap	copy(potiron);
	ScavTrap	clone;

	clone.displayStats();
	potiron.takeDamage(10);
	clone = potiron;
	potiron.takeDamage(10);
	clone.displayStats();

	// scavi.attack("potiron");
	// potiron.displayStats();
	return (0);
}