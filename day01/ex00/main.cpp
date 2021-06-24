#include "Zombie.hpp"

int	main(void)
{
	Zombie	*dave = newZombie("Dave");
	Zombie	david;

	david.name = "David";
	dave->announce();
	david.announce();
	randomChump("Zoe");
	delete dave;
}