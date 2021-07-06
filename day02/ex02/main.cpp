#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c(b);
	Fixed const	d(Fixed(4) / Fixed(2));
	Fixed const	e(Fixed(6.02f) - Fixed(2.2f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	if (a < b)
		std::cout << "a is less than b" << std::endl;
	else
		std::cout << "b is less than a" << std::endl;
	if (a <= a)
		std::cout << "a is less or equal to a (yeah it's stupid but I didn't want 4k Fixed)" << std::endl;
	if (a >= a)
		std::cout << "a is more or equal to a" << std::endl;
	std::cout << "min between a " << a << " and b " << b << " is " << Fixed::min(a, b) << std::endl;
	std::cout << "max between a " << a << " and b " << b << " is " << Fixed::max(a, b) << std::endl;
	if (c == b)
		std::cout << "c " << c << " is equal to b " << b << std::endl;
	if (a != b)
		std::cout << "a " << a << " is different than b " << b << std::endl;
	Fixed	test;
	test = b;
	std::cout << "b is " << b << " equals to test " << test << std::endl;
	return (0);
}