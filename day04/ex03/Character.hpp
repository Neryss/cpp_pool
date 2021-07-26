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
		virtual	std::string const	&getName() const;
		virtual	void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, Character &target);
};

#endif