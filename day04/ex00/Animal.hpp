#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Cat.hpp"
#include "Dog.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		~Animal();
		Animal				&operator=(const Animal &other);
		void				makeSound() const;
		const std::string	&getType() const;
};

#endif