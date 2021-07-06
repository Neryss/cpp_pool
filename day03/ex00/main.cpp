#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapi("clapi");

	clapi.attack("enemy");
	clapi.takeDamage(10);
	clapi.beRepaired(15);
	return (0);
}