#include "span.hpp"
#include <iostream>

int main(void)
{
	Span test(5);

	test.addNumber(5);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return (0);
}