#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int					p_value;
		const static int	p_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f1);
		~Fixed();
		int	getRawBits();

};

#endif