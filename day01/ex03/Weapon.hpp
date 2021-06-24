#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string			name;
	public:
		Weapon();
		Weapon(std::string p_name)
		{
			name = p_name;
		}
		~Weapon();
		const std::string	&getType();
		void				setType(std::string new_name);
};

#endif