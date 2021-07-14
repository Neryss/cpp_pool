#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "------- CONSTRUCTORS -------" << std::endl;
	ClapTrap	scavi("Clapi");
	ScavTrap	enemy("bad-scavi");
	ScavTrap	clone("clone");
	ScavTrap	test(enemy);

	std::cout << "------- FUNCTIONS -------" << std::endl;
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.guardGate();
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.beRepaired(enemy.get_ad() / 2);
	enemy.guardGate();
	test.guardGate();

	std::cout << "------- COPY OPERATOR -------" << std::endl;
	test = clone;
	test.guardGate();

	std::cout << "------- DESTRUCTORS -------" << std::endl;
	return (0);
}