#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] <" + _name << "> Is born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] <" + name << "> has been given a name!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "[FragTrap] <" + _name << "> Created by copy!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] <" + _name << "> Has been destroyed :sadge:" << std::endl;
}

void	FragTrap::attack(std::string name)
{
	std::cout << "[FragTrap] <" + _name << "> Thrown its eye onto your face, ouch!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "<" + _name << "> *raises its hand* Wanna high five ?!" << std::endl;
	
}