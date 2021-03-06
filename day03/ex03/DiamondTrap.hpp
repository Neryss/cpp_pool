#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap();
		using ScavTrap::attack;
		DiamondTrap	&operator=(const DiamondTrap &other);
		const std::string	&getName() const;
		const int			&get_ad() const;
		const int			&get_hp() const;
		const int			&get_ep() const;
		void				whoAmI();
		
};

std::ostream	&operator<<(std::ostream &os, const DiamondTrap &dp);

#endif