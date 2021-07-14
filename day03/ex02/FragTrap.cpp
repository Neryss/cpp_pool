#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] <" + _name << "> Is born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] <" + name << "> has been given a name!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "[FragTrap] <" + _name << "> Created by copy!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] <" + _name << "> Has been destroyed :sadge:" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_ad = other._ad;
	_mana = other._ad;
	return (*this);
}

void	FragTrap::attack(std::string name)
{
	std::cout << "[FragTrap] <" + _name << "> Thrown its eye onto " + name + " face, ouch!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string	answer;
	std::cout << "<" + _name << "> *raises its hand* Wanna high five ?! [y/n]" << std::endl;
	std::cin >> answer;
	std::cout << "[" << answer << "]" << std::endl;
	if (std::cin.fail() || answer.length() != 1)
	{
		std::cout << "<" + _name << "> Did you even try ?" << std::endl;
		std::cin.clear();
		return ;
	}
	else if (answer[0] == 'y')
		std::cout << "*you clapped this hand, <" + _name + "> the Frag seems happy*" << std::endl;
	else if (answer[0] == 'n')
		std::cout << "Well played, you made <" + _name + "> cry, I hope you're proud of yourself!" << std::endl;
}