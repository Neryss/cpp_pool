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
		Animal	&operator=(const Animal &other);
		~Animal();
		void	makeSound();
};

#endif