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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	p_value = other.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed &other)
{
	if (p_value < other.p_value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other)
{
	if (p_value <= other.p_value)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &other)
{
	if (p_value > other.p_value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other)
{
	if (p_value >= other.p_value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other)
{
	if (p_value == other.p_value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other)
{
	if (p_value != other.p_value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->p_value++;
	return (*this);
}

Fixed	Fixed::operator++(int dummy)
{
	(void)dummy;
	Fixed	tmp(*this);
	this->p_value++;
	return (tmp);
}

Fixed	&min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f1)
{
	os << f1.toFloat();
	return (os);
}
