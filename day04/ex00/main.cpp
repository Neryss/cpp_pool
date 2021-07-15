#include "Animal.hpp"

int	main()
{
	const Animal	*meta = new Animal();

	meta->makeSound();
	std::cout << meta->getType() << std::endl;
	return (0);
}