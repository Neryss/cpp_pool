#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

bool	checker(std::string s)
{
	double	cast;

	if (isprint(s[0]) && !isdigit(s[0]) && s.length() == 1)
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong nb of arguments" << std::endl;
		return (1);
	}
	if (!checker(argv[0]))
	{
		
	}
	return (0);
}