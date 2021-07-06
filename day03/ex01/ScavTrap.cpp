#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "<" + _name + "> the Scav is alive!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" + _name + "> was such a good Scav..." << std::endl;
}