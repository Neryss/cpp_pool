#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}