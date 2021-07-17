#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal	*array = new Animal[10];
	for (int i  = 0; i < 5; i++)
		array[i] = Cat();
	for (int i = 5; i < 10; i++)
		array[i] = Dog();
	Cat 	*test = new Cat();
	Cat 	copy(*test);

	for (int i = 0; i < 10; i++)
		std::cout << "array of " << i << " is " << array[i].getType() << std::endl;
	test->printIdeas();
	copy.printIdeas();
	std::cout << "test type" << test->getType() << std::endl;
	std::cout << "copy type" << copy.getType() << std::endl;
	test->getBrain()->setIdea(0, "UNKNOWN");
	copy.getBrain()->displayIdeas(1);
	test->getBrain()->displayIdeas(1);
	delete test;
	delete [] array;
	return (0);
}
