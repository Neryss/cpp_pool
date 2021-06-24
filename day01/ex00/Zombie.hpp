#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		std::string	name;
		~Zombie();
		void	announce(void);
};

#endif