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
		Fixed &operator=(Fixed &other);
		int	getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
