#include "DiamondTrap.hpp"

// C & DTORS

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DP constructor called\n" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_ad = FragTrap::get_ad();
	std::cout << "<" + _name + "> Created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<" + _name + "> is a pile of diamonds now" << std::endl;
}

// GETTERS

const std::string	&DiamondTrap::getName() const
{
	return (_name);
}

const int	&DiamondTrap::get_ad() const
{
	return (_ad);
}

const int	&DiamondTrap::get_hp() const
{
	return (_hitpoints);
}

const int	&DiamondTrap::get_ep() const
{
	return (_mana);
}

//OTHER

void	DiamondTrap::whoAmI()
{
	std::cout << "<" + _name + "> Claptrap name is : [" << ClapTrap::_name << "]" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const DiamondTrap &dp)
{
	os << "<" + dp.getName() + "> stats :" << std::endl;
	os << "hp [" << dp.get_hp() << "]" << std::endl;
	os << "ep [" << dp.get_ep() << "]" << std::endl;
	os << "ad [" << dp.get_ad() << "]";
	return (os);
}