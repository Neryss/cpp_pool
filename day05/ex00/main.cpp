#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << "Constructors and copy" << std::endl;
		Bureaucrat	bob("bob", 150);
		Bureaucrat	test(bob);
		Bureaucrat	salut("test", 15);
		salut = Bureaucrat("lol", 10);
		std::cout << "Incrementing and decrementing" << std::endl;
		std::cout << salut;
		salut.decrementGrade();
		std::cout << salut;
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		//	Following will throw exception because grade will be past 150
		// for (int i = 0; i < 3; i++)
		// {
		// 	std::cout << bob;
		// 	bob.decrementGrade();
		// }
		// Will throw exception because grade will be too high
		// for (int i = 0; i < 11; i++)
		// {
		// 		salut.incrementGrade();
		// 		std::cout << salut;
		// }
		std::cout << salut;
		std::cout << test;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}