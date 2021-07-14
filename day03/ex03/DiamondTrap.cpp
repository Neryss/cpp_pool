#include "DiamondTrap.hpp"

// C & DTORS

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DP constructor called\n" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::_name += "_clap_name";
	_ad = 30;
	_name = name;
	std::cout << "<" + _name + "> Created!" << _ad << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<" + _name + "> is a pile of diamonds now" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::_name = copy.ClapTrap::_name;
	std::cout << "[" << copy.ClapTrap::_name << "]" << std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_ad = copy._ad;
	_mana = copy._mana;
	_guarding = copy._guarding;
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

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::_name = other.ClapTrap::_name;
	_name = other._name;
	_hitpoints = other._hitpoints;
	_ad = other._ad;
	_mana = other._mana;
	_guarding = other._guarding;
	return (*this);
}

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