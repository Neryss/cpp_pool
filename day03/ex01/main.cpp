#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavi("Scavi");
	ScavTrap	potiron("Potiron");
	ScavTrap	copy(potiron);
	ScavTrap	clone;

	clone = potiron;

	potiron.displayStats();
	scavi.attack("potiron");
	potiron.displayStats();
	return (0);
}