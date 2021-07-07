#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_guarding = false;
	std::cout << "<" + _name + "> the Scav is alive!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavtrap created using default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" + _name + "> was such a good Scav..." << std::endl;
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "<SCAV_TRAP>-" + _name << " throws rocks on " << name << " for " << _ad << " damage!" << std::endl;
}

ScavTrap::ScavTrap	&operator=(const ScavTrap *other)
{

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