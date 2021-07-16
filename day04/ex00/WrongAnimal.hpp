#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal();
		WrongAnimal				&operator=(const WrongAnimal &other);
		void		makeSound() const;
		const std::string	&getType() const;
};

#endif