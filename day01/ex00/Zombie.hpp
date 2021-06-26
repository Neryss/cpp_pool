#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		~Zombie();
		void	announce(void);
		void	setName(std::string p_name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif