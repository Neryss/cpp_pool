#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string			name;
	const std::string	&getType();
	void				setType(std::string new_name);
	Weapon();
	Weapon(std::string p_name)
	{
		name = p_name;
	}
};

Weapon::~Weapon()
{
}


#endif