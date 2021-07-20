#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	// Animal	cant();
	// Animal	*cant = new Animal();
	Cat 	*cat = new Cat();
	Cat 	copy(*cat);
	Dog		*dog = new Dog();
	// Dog		*dogy = new Dog();
	std::cout << "----- COPY ASSIGNMENT -----" << std::endl;
	// dogy = dog;

	cat->printIdeas();
	copy.printIdeas();
	std::cout << "test type" << cat->getType() << std::endl;
	std::cout << "copy type" << copy.getType() << std::endl;
	cat->getBrain()->setIdea(0, "UNKNOWN");
	copy.getBrain()->displayIdeas(1);
	cat->getBrain()->displayIdeas(1);
	delete cat;
	delete dog;
	std::cout << "Whut" << std::endl;
	// delete dogy;
	return (0);
}
