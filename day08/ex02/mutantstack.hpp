#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack	&operator=(const MutantStack &other);
		~MutantStack();
		iterator begin();
		iterator end();
};

template <typename T>
MutantStack<T>::MutantStack(){
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<int>(other) {
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());

}

#endif