#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DP constructor called\n" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + "_clap_name")
{
	std::cout << "<" + _name + "> Created!" << std::endl;
}
