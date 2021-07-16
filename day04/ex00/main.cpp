#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	std::cout << "----- CTORS -----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "[WRONG ANIMALS]" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;

	std::cout << "----- GET TYPES -----" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "[WRONG ANIMALS]" << std::endl;
	std::cout << k->getType() << " \n" << std::endl;
	std::cout << "----- MAKE SOUNDS -----" << std::endl;
	i->makeSound(); //will output the cat sound!j->makeSound();meta->makeSound();4
	j->makeSound();
	meta->makeSound();
	std::cout << "[WRONG ANIMALS]" << std::endl;
	k->makeSound();

	wmeta->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	delete meta;
	std::cout << "[WRONG ANIMALS]" << std::endl;
	delete k;
	delete wmeta;
	return (0);
}
