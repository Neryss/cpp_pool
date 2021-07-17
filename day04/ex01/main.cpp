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
	std::cout << "test type" << test->getType() << std::endl;
	std::cout << "copy type" << copy.getType() << std::endl;
	test->getBrain()->setIdea(0, "UNKNOWN");
	copy.getBrain()->displayIdeas(1);
	test->getBrain()->displayIdeas(1);
	delete test;

	// Brain	*br = new Brain();
	// br->displayIdeas();
	// delete br;
	return (0);
}
