#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*smol = new Zombie;

	smol->setName(name);
	return (smol);
}