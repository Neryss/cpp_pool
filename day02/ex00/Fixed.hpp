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
		Fixed()
		:p_value(0)
		{};
		Fixed(const Fixed &f1)
		:p_value(f1.p_value)
		{};
		~Fixed();

};

#endif