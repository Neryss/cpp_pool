#include "span.hpp"

Span::Span(unsigned int N)
:_size(N), _filled(0)
{
	_v = std::vector<int>(N);
}

Span::Span(const Span &other)
:_size(other._size), _filled(other._filled), _v(other._v)
{
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_size = other._size;
		_filled = other._filled;
		_v = other._v;
	}
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (_filled >= _size)
		throw VectorFilledException();
	else
		_v[_filled++] = nb;
}

int	Span::shortestSpan(void)
{
	if (!_filled)
		throw VectorNoSpanException();
	else
	{
		std::sort(_v.begin(), _v.begin() + _filled);
		std::vector<int>::iterator it = _v.begin();
		int res = *(it + 1) - *it;
		size_t i = 0;
		while (++it + 1 != _v.begin() + _filled && i++ < _filled)
			res = std::min(res, *it - *(it - 1));
		return (res);
	}
}

Span::~Span()
{
}
