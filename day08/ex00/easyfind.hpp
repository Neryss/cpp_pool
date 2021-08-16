#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>

class	notFoundExcept : public std::exception
{
	const char *what() const throw()
	{
		return ("Didn't find any ocurrence of the number");
	}
};

template <typename T>
int	&easyfind(T cont, int nb)
{
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), nb);
	if (it != cont.end())
		return (*it);
	throw notFoundExcept();
}

#endif