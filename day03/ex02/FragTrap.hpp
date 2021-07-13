#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		void	attack(std::string name);
		void	highFivesGuys(void);
		// FragTrap	&operator=(const FragTrap )
};

#endif