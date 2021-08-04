#include "iter.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string array[4] = {"yo", "les", "potes", "hihi"};
	int	n_array[4] = {2, 4, 6, 8};
	iter(array, 4, display);
	std::cout << std::endl;
	iter(n_array, 4, display);
	std::cout << std::endl;
	iter(n_array, 4, increment);
	iter(n_array, 4, display);
	return (0);
}