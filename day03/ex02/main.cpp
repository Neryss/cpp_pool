#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "------- CONSTRUCTORS -------" << std::endl;
	ClapTrap	scavi("Clapi");
	FragTrap	enemy("bad-scavi");
	FragTrap	test("bobert");
	FragTrap	clone(test);

	std::cout << "------- FUNCTIONS -------" << std::endl;
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.beRepaired(enemy.get_ad() / 2);
	enemy.highFivesGuys();

	std::cout << "------- COPY OPERATOR -------" << std::endl;
	enemy = test;
	clone.attack("idk");

	std::cout << "------- DESTRUCTORS -------" << std::endl;
	return (0);
}