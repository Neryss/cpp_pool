#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		~AMateria();
		AMateria			&operator=(AMateria const &other);
		std::string const	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif