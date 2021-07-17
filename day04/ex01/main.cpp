#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Cat *test = new Cat();

	test->printIdeas();
	delete test;
	return (0);
}
