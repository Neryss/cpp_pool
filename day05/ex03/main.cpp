#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <time.h>

int	main()
{
	Bureaucrat	bob("bob", 1);
	Bureaucrat	tet("tet", 40);
	Intern		intern;
	Form		*rrf;
	int ret = 0;
	std::string	targets[4] = {"presidential pardon", "robotomy request", "shrubbery creation", "blablabla"};
	try
	{

		srand(time(NULL));
		rrf = intern.makeForm(targets[rand() % 4], "idk");
		if (!rrf)
			return (1);
		std::cout << *rrf;
		tet.signForm(*rrf);
		bob.executeForm(*rrf);
		tet.executeForm(*rrf);
		rrf->execute(tet);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		ret = 1;
	}
	delete rrf;
	return (ret);
}