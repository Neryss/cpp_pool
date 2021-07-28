#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Form	f1("B38", 1, 50);
		Bureaucrat	bob("bob", 1);
		std::cout << f1;
		bob.signForm(f1);
		bob.signForm(f1);
		f1.beSigned(bob);
		f1.beSigned(bob);
		std::cout << f1;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}