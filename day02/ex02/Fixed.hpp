#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	private:
		int					p_value;
		const static int	p_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f1);
		Fixed(const int raw);
		Fixed(const float f_raw);
		~Fixed();
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &other);
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		Fixed	&operator++();
		Fixed	operator++(int dummy);
		bool	operator<(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator>(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &f1);
Fixed			&min(Fixed &a, Fixed &b);

#endif
