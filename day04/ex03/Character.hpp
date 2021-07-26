#ifndef Character_HPP
#define Character_HPP

#include "AMateria.hpp"

class	AMateria;

class	Character
{
	private:
		std::string	_name;
		AMateria	*_materia[4];
		Character();
	public:
		Character(const std::string name);
		Character(const Character &other);
		Character	&operator=(const Character &other);
		virtual	~Character();
		virtual	std::string const	&getName() const = 0;
		virtual	void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, Character &target) = 0;
};

#endif