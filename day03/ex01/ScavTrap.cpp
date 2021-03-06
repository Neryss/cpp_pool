#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_mana = 50;
	_ad = 20;
	_guarding = false;
	std::cout << "<" + _name + "> the Scav is alive!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
	_mana = 50;
	_ad = 20;
	_guarding = false;
	std::cout << "Scavtrap created using default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_ad = other._ad;
	_mana = other._mana;
	_guarding = other._guarding;
	std::cout << "Scavtrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" + _name + "> was such a good Scav..." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	_guarding = other._guarding;
	_name = other._name;
	_hitpoints = other._hitpoints;
	_mana = other._mana;
	_ad = other._ad;
	return (*this);
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "<SCAV_TRAP>-" + _name << " throws rocks on " << name << " for " << _ad << " damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (!_guarding)
	{
		_guarding = true;
		std::cout << "<" + _name + "> is now entering gate keeper mode!" << std::endl;
	}
	else
	{
		_guarding = false;
		std::cout << "<" + _name + "> is now exiting gate keeper mode!" << std::endl;
	}
}