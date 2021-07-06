#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_guarding = false;
	std::cout << "<" + _name + "> the Scav is alive!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" + _name + "> was such a good Scav..." << std::endl;
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