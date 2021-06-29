#include "Karen.hpp"

int	main(int argc, char **argv)
{
	bool	is_in = false;
	std::string	type[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	if (argc <= 1 || argc > 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	for (int i = 0; i < 4; i++)
		if (type[i] == argv[1])
			is_in = true;
	if (!is_in)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	Karen	karen;
	karen.filter(argv[1]);
	return (0);
}