#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	p_value = 0;
}

Fixed::Fixed(const Fixed &f1)
{
	p_value = f1.getRawBits();
}

int	Fixed::getRawBits()
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->p_value);
}