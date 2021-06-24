#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanB(std::string p_name)
		:name(p_name)
		{}
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif