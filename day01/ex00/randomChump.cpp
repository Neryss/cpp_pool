#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	random;

	random.name = name;
	random.announce();
}