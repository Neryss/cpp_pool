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
		ClapTrap()
		:_name("bob"), _hitpoints(10), _mana(10), _ad(0)
		{};
		ClapTrap(std::string name)
		:_name(name), _hitpoints(10), _mana(10), _ad(0)
		{};
		
		ClapTrap(const ClapTrap *other);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap *other);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif