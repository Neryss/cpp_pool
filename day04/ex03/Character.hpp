#ifndef Character_HPP
#define Character_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	AMateria;

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materia[4];
		Character();
	public:
		Character(const std::string name);
		Character(const Character &other);
		virtual Character	&operator=(const Character &other);
		~Character();
		std::string const	&getName() const;
		virtual	void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};

#endif