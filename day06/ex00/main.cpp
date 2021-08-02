#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void	checker(char *value)
{
	double	cast;

	cast = atof(value);
	std::cout << "aled" << cast << std::endl;
	// CHAR CAST
	if (cast < -128 || cast > 127 || std::isnan(cast))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<int>(cast)))
		std::cout << "char: \'" << static_cast<char>(cast) << "\'" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong nb of arguments" << std::endl;
		return (1);
	}
	checker(argv[1]);
	return (0);
}