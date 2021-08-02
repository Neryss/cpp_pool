#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void	checker(char *value)
{
	double	cast;

	cast = atof(value);
	// std::cout << "aled" << cast << std::endl;

	// CHAR CAST
	// Check isnan
	if (cast < -128 || cast > 127 || std::isnan(cast))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<int>(cast)))
		std::cout << "char: \'" << static_cast<char>(cast) << "\'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;

	// INT CAST
	if (cast < -2147483648 || cast > 2147483647 || std::isnan(cast))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: \'" << static_cast<int>(cast) << "\'" << std::endl;

	// DOUBLE CAST
	std::cout << "double: \'" << std::setprecision(1) << std::fixed << cast << "\'" << std::endl;

	// FLOAT CAST
	std::cout << "float: \'" << std::setprecision(1) << std::fixed << static_cast<float>(cast) << "f\'" << std::endl;
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