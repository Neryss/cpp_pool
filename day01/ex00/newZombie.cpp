#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*smol = new Zombie;

	smol->name = name;
	return (smol);
}