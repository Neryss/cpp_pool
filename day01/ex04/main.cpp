#include <iostream>
#include <fstream>
#include <string>

int	ft_error(std::string error, int ret)
{
	std::cout << error << std::endl;
	return (ret);
}

void	replace_inline(std::ifstream &file, std::ofstream &replace, std::string &before, std::string &after)
{
	std::string	line;
	size_t		found;
	(void)after;

	while (getline(file, line))
	{
		found = line.find(before);
		if (found != line.npos)
		{
			std::cout << "Found one!" << std::endl;
		}
		replace << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::string		before;
	std::string		after;
	std::string		name;

	if (argc != 4)
		return (ft_error("Wrong number of arguments", 1));
	file.open(argv[1]);
	name = argv[1];
	name.append(".replace");
	std:: ofstream replace (name);
	before = argv[2];
	after = argv[3];
	if (!file.is_open())
		return (ft_error("Error during file opening", 1));
	replace_inline(file, replace, before, after);
	file.close();
}