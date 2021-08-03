#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <limits>

void	checker(char *value)
{
	double	cast;
	(void)value;

	cast = atof(value);
	// cast = __DBL_MAX__;
	// std::cout << "aled" << cast << std::endl;

	// CHAR CAST
	// Check isnan
	// need to check overflows
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
	if (cast >= __DBL_MAX__ || cast <= __DBL_MIN__)
		std::cout << "double: " << "impossible\'" << std::endl;
	else
		std::cout << "double: " << std::setprecision(1) << std::fixed << cast << std::endl;

	// FLOAT CAST
	if (cast >= std::numeric_limits<float>::max() || cast <= std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(cast) << "f" << std::endl;
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