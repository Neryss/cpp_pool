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
	char	answer;
	std::cout << "<" + _name << "> *raises its hand* Wanna high five ?! [y/n]" << std::endl;
	std::cin >> answer;
	if (std::cin.fail())
	{
		std::cout << "<" + _name << "> Did you even try ?" << std::endl;
		std::cin.clear();
		return ;
	}
	else if (answer == 'y')
}