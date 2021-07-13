#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool	_guarding;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		void	attack(std::string name);
		ScavTrap	&operator=(const ScavTrap *other);
		int	get_mana();
		~ScavTrap();
		void	guardGate();
};

#endif