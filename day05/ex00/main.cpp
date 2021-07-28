#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}