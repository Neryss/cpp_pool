#include <iostream>
#include <string>
#include "whatever.hpp"

int	main(void)
{
	int	a = 0;
	int	b = 10;
	float	f1 = 42.07;
	float	f2 = 69.96;
	std::string	s1 = "Yo les potes!";
	std::string	s2 = "bye les gens!";

	std::cout << "------ SWAP TESTS ------" << std::endl;
	std::cout << "a is: " << a << std::endl << "b is: " << b << std::endl;
	swap(a, b);
	std::cout << "a is: " << a << std::endl << "b is: " << b << std::endl;

	std::cout << "s1 is: " << s1 << std::endl << "s2 is: " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "s1 is: " << s1 << std::endl << "s2 is: " << s2 << std::endl;

	std::cout << "f1 is: " << f1 << std::endl << "f2 is: " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "f1 is: " << f1 << std::endl << "f2 is: " << f2 << std::endl;

	std::cout << std::endl << "------ MIN TESTS ------" << std::endl;
	std::cout << "min between " << a << " and " << b << " is " << min(a, b) << std::endl;
	std::cout << "min between " << f1 << " and " << f2 << " is " << min(f1, f2) << std::endl;
	// can't compare strings (no shit sherlock)
	// std::cout << "min between " << s1 << " and " << s2 << " is " << min(s1, s2) << std::endl;
	
	std::cout << std::endl << "------ MAX TESTS ------" << std::endl;
	std::cout << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;
	std::cout << "max between " << f1 << " and " << f2 << " is " << max(f1, f2) << std::endl;
	return (0);
}