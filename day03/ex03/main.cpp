#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap test("Hello");
	DiamondTrap	a("a");
	DiamondTrap	b("b");
	DiamondTrap	c(b);

	// std::cout << test << std::endl;
	// test.attack("other");
	// test.highFivesGuys();
	// test.guardGate();
	test.whoAmI();
	b = a;
	b.whoAmI();
	c.whoAmI();
}