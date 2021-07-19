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
	Cat 	*cat = new Cat();
	Cat 	copy(*cat);
	Dog		*dog = new Dog();
	Dog		*dogy = new Dog();
	// std::cout << "----- COPY ASSIGNMENT -----" << std::endl;
	// dogy = dog;

	for (int i = 0; i < 10; i++)
		std::cout << "array of " << i << " is " << array[i].getType() << std::endl;
	cat->printIdeas();
	copy.printIdeas();
	std::cout << "test type" << cat->getType() << std::endl;
	std::cout << "copy type" << copy.getType() << std::endl;
	cat->getBrain()->setIdea(0, "UNKNOWN");
	copy.getBrain()->displayIdeas(1);
	cat->getBrain()->displayIdeas(1);
	delete cat;
	delete dog;
	delete dogy;
	delete [] array;
	return (0);
}
