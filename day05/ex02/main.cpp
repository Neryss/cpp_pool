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
		PresidentialPardonForm	p2("yo");
		p2 = p1;

		std::cout << p1.getTarget() << " " << p2.getTarget() << std::endl;
		Bureaucrat	bob("bob", 100);
		bob.signForm(r1);
		bob.executeForm(r1);
		// Bureaucrat	noob("noob", 80);
		// s1.beSigned(bob);
		// s1.beSigned(noob);
		// // noob.signForm(r1);
		// s1.execute(bob);
		// r1.execute(bob);
		// bob.signForm(p1);
		// p1.execute(bob);
		// bob.executeForm(p1);
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}