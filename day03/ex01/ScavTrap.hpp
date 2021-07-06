#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public	ClapTrap
{
	private:
		bool	_guarding;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate();
};

#endif