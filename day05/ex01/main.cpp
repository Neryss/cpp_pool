#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Form	f1("B38", 10, 50);
		Bureaucrat	bob("bob", 10);
		bob.signForm(f1);
		bob.signForm(f1);
		f1.beSigned(bob);
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}