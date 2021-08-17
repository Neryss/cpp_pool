#include "span.hpp"
#include <iostream>

int main(void)
{
	Span test(6);
	Span error(1);
	try
	{
		test.addNumber(5);
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		Span copy(test);

		error.addNumber(69);
		// error.addNumber(79);
		std::cout << test.shortestSpan() << std::endl;
		std::cout << copy.shortestSpan() << std::endl;
		std::cout << copy.longestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		copy.addNumber(68);
		std::cout << copy.longestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}