#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const Animal	*meta = new Animal();

	// meta->makeSound();
	std::cout << meta->getType() << std::endl;
	const Animal	*j = new Cat();

	j->makeSound();
	return (0);
}
