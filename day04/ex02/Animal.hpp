#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		~Animal();
		virtual Animal				&operator=(const Animal &other);
		virtual void		makeSound() const = 0;
		const std::string	&getType() const;
};

#endif
