#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	p_value = 0;
}

Fixed::Fixed(const Fixed &f1)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f1;
}

Fixed::Fixed(const int raw)
{
	std::cout << "int constructor called" << std::endl;
	p_value = raw << p_bits;
}

Fixed::Fixed(const float f_raw)
{
	std::cout << "float constructor called" << std::endl;
	p_value = roundf(f_raw * (1 << p_bits));
}

int	Fixed::getRawBits() const
{
	return (this->p_value);
}

float	Fixed::toFloat(void) const
{
	return ((p_value / (float)(1 << p_bits)));
}

int		Fixed::toInt(void) const
{
	return (p_value >> p_bits);
}

void	Fixed::setRawBits(int const raw)
{
	p_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	p_value = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f1)
{
	os << f1.toFloat();
	return (os);
}
