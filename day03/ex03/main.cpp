#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// Basic constructor tests
	std::cout << "------- CONSTRUCTORS -------" << std::endl;
	DiamondTrap test("Hello");
	DiamondTrap	a("a");
	DiamondTrap	b("b");
	DiamondTrap	c(b);

	// Stream
	std::cout << "------- STREAM OVERLOAD -------" << std::endl;
	std::cout << test << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	// Scav attack
	std::cout << "------- SCAV ATTACK -------" << std::endl;
	test.attack("other");

	// Both special functions
	std::cout << "------- SPECIAL FUNCTIONS -------" << std::endl;
	test.highFivesGuys();
	test.guardGate();

	// WhoAmI test

	std::cout << "------- WHOAMI -------" << std::endl;
	test.whoAmI();

	// Copy operator test

	std::cout << "------- OPERATOR -------" << std::endl;
	b = a;
	b.whoAmI();
	// c.whoAmI();

	std::cout << "------- DESTRUCTORS -------" << std::endl;
	return (0);
}