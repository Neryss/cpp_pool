#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 150);
		Bureaucrat	test(bob);
		Bureaucrat	salut("test", 15);
		salut =  Bureaucrat("lol", 10);
		// salut->decrementGrade();
		bob.incrementGrade();
		// for (int i = 0; i < 3; i++)
		// {
		// 	std::cout << bob;
		// 	bob.decrementGrade();
		// }
		// for (int i = 0; i < 10; i++)
		// {
		// 		std::cout << salut;
		// 		salut.incrementGrade();
		// }
		std::cout << bob;
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