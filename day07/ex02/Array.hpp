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
		Array():_array(NULL), _n(0) {};
		Array(unsigned int n)
		{
			_array = new T[n];
			_n = n;
		}
		Array(const Array &other)
		{
			_array = new T[other.size()];
			_n = other._n;
			for (int i = 0; i < _n; i++)
				other._array[i] = _array[i];
		}
		~Array()
		{
			if (_array)
				delete [] _array;
		}
		Array	&operator=(const Array &other)
		{
			if (this != &other)
			{
				if (_array)
					delete [] _array;
				_n = other._n;
				_array = new T[_n];
				for (int i = 0; i < _n; i++)
					_array[i] = other._array[i];
			}
			return (*this);
		}
		class OutOfRangeException : public std::exception
		{
			const char *what () const throw()
			{
				return ("Error: Out of bounds");
			}
		};
		T	&operator[](int i) const
		{
			if (i < 0 || !_array || i >= _n)
				throw OutOfRangeException();
			return (_array[i]);
		}
		unsigned int	size() const {
			return (_n);
		}
};

#endif
