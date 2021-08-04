#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int	_n;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array	&operator=(const Array &other);
}

#endif