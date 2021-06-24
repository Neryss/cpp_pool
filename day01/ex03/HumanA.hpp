#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanA(std::string p_name, Weapon p_weapon)
		:name(p_name), weapon(p_weapon)
		{}
		~HumanA();
		void	attack();
};

#endif