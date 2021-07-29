#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		// Form	cant("test", 10, 10);
		ShrubberyCreationForm	s1("home");	// 145 137
		RobotomyRequestForm		r1("yikes"); // 72 45
		PresidentialPardonForm	p1("hello"); // 25 5
		PresidentialPardonForm	p2("yo");
		Bureaucrat				sbire("sbire", 15);
		p2 = p1;

		std::cout << p1.getTarget() << " " << p2.getTarget() << std::endl;
		Bureaucrat	bob("bob", 100);
		bob.signForm(r1);
		bob.executeForm(r1);
		sbire.signForm(r1);
		r1.execute(sbire);
		Bureaucrat	noob("noob", 80);
		// sbire.signForm(p2);	// can sign
		// sbire.executeForm(p2); // can't execute
		// both ok
		s1.beSigned(noob);
		s1.execute(bob);
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}