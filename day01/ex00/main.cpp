#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	test;
	(void)argc;
	(void)argv;

	test.name = "Dave";
	test.announce();
}