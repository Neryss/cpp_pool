#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <iterator>

template <typename T>
class Mutantstack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		Mutantstack();
		Mutantstack(const Mutantstack &other);
		Mutantstack	&operator=(const Mutantstack &other);
		~Mutantstack();
		iterator begin();
		iterator end();
};

#endif