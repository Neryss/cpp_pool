#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		ShrubberyCreationForm	s1("home");
		RobotomyRequestForm		r1("yikes");
		PresidentialPardonForm	p1("hello");

		Bureaucrat	bob("bob", 1);
		s1.beSigned(bob);
		bob.signForm(r1);
		s1.execute(bob);
		r1.execute(bob);
		bob.signForm(p1);
		p1.execute(bob);
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}