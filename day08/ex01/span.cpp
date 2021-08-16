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

Span::~Span()
{
}
