#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DP constructor called\n" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name)
{
	std::cout << "<" + _name + "> Created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<" + _name + "> is a pile of diamonds now" << std::endl;
	
}