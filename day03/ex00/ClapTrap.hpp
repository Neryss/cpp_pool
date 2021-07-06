#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitpoints;
		int			_mana;
		int			_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap *other);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap *other);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif