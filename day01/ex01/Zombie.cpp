#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Ohoh... Seems like " << this->name << " isn't alive any... I mean isn't dea... Well you get the point, isn't with us anymore." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].name = name;
	return (horde);
	// delete [] horde;
}