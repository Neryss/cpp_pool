#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Ohoh... Seems like " << this->name << " isn't alive any... I mean isn't dea... Well you get the point, isn't with us anymore." << std::endl;
}

void	Zombie::setName(std::string p_name)
{
	name = p_name;
}