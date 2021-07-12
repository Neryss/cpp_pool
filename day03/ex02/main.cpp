#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	scavi("Clapi");
	FragTrap	enemy("bad-scavi");
	FragTrap	test("bobert");

	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	scavi.attack("bad-scavi");
	enemy.takeDamage(scavi.get_ad());
	enemy.beRepaired(enemy.get_ad() / 2);
	enemy.highFivesGuys();
	enemy = test;
	return (0);
}