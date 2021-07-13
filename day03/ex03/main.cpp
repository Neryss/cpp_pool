#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap test("Hello");

	std::cout << test << std::endl;
	test.attack("other");
	test.highFivesGuys();
	test.guardGate();
	test.whoAmI();
}