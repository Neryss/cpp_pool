#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		void		attack(std::string name);
		void		highFivesGuys(void);
		const int	&get_ad();
		FragTrap	&operator=(const FragTrap &other);
};

#endif