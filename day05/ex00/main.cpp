#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 3);
		for (int i = 0; i < 3; i++)
		{
			std::cout << bob;
			bob.incrementGrade();
		}
		std::cout << bob;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}