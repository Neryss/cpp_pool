#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Form	f1("B38", 1, 50);
		Form	f2 = f1;
		Bureaucrat	bob("bob", 1);
		Bureaucrat	noob("noob", 130);
		std::cout << f1;
		bob.signForm(f1);
		noob.signForm(f2);
		// This line will throw an exception because grade too low
		f2.beSigned(noob);
		bob.signForm(f1);
		f1.beSigned(bob);
		f1.beSigned(bob);
		std::cout << f1;
		std::cout << f2;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}