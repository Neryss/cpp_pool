#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 150);
		Bureaucrat	test(bob);
		bob.incrementGrade();
		// for (int i = 0; i < 3; i++)
		// {
		// 	std::cout << bob;
		// 	bob.incrementGrade();
		// }
		std::cout << bob;
		std::cout << test;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}