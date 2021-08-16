#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _size;
		unsigned int _filled;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span	&operator=(const Span &other);

		void	addNumber(int nb);
};

#endif