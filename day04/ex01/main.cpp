#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Cat *test = new Cat();
	Cat copy(*test);

	test->printIdeas();
	copy.printIdeas();
	delete test;

	// Brain	*br = new Brain();
	// br->displayIdeas();
	// delete br;
	return (0);
}
