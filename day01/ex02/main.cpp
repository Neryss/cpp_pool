#include <iostream>
#include <string>

int	main(void)
{
	std::string	hi = "HI THIS IS BRAIN";

	std::string	*stringPTR = &hi;
	std::string	&stringREF = hi;

	std::cout << "Memory of the string:   " << &hi << std::endl;
	std::cout << "Same, using pointer:    " << stringPTR << std::endl;
	std::cout << "Same using the ref:     " << &stringREF << std::endl;
	std::cout << "String using pointer:   " << *stringPTR << std::endl;
	std::cout << "String using reference: " << stringREF << std::endl;
}