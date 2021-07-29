#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <time.h>

int	main()
{
	try
	{
		Bureaucrat	bob("bob", 1);
		Intern		intern;
		Form		*rrf;
		std::string	targets[4] = {"presidential pardon", "robotomy request", "shrubbery creation", "blablabla"};

		srand(time(NULL));
		rrf = intern.makeForm(targets[rand() % 4], "idk");
		delete rrf;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}