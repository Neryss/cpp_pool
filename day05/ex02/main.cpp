#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		ShrubberyCreationForm	s1("home");
		ShrubberyCreationForm	s2("aled");
		// std::cout << s1 << s1.getTarget() << std::endl;
		// std::cout << s2 << s2.getTarget() << std::endl;
		// s2 = s1;
		// std::cout << s2 << s2.getTarget() << std::endl;
		// Form	f1("B38", 1, 50);
		// Bureaucrat	bob("bob", 1);
		// std::cout << f1;
		// bob.signForm(f1);
		// bob.signForm(f1);
		// f1.beSigned(bob);
		// f1.beSigned(bob);
		// std::cout << f1;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}