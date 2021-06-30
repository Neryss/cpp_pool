#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	p_value = 0;
}

Fixed::Fixed(const Fixed &f1)
{
	std::cout << "Assignation operator called" << std::endl;
	p_value = f1.getRawBits();
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->p_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	p_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed &other)
{
	p_value = other.getRawBits();
	return (*this);
}
