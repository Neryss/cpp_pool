#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "------- CONSTRUCTORS -------" << std::endl;
	ClapTrap	clapi("clapi");
	ClapTrap	clone(clapi);
	ClapTrap	enemy("enemy");

	std::cout << "------- FUNCTIONS -------" << std::endl;
	clapi.attack("clone");
	enemy.takeDamage(clapi.get_ad());
	enemy.beRepaired(1);
	enemy.attack("clapi");
	clapi.takeDamage(clapi.get_ad());

	std::cout << "------- COPY OPERATOR -------" << std::endl;
	clapi = enemy;
	clapi.attack("enemy");

	std::cout << "------- DESTRUCTORS -------" << std::endl;
	return (0);
}