#ifndef Character_HPP
#define Character_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	AMateria;

typedef struct s_list
{
	AMateria *materia;
	struct s_list *next;
}				t_list;

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materia[4];
		t_list	*_miam;
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