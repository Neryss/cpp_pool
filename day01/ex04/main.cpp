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
	std::string	start;
	std::string	end;
	size_t		found;

	found = 0;
	while (getline(file, line))
	{
		if (line.find(before, 0) != line.npos)
		{
			while ((found = line.find(before, 0)) != line.npos)
			{
				start = line.substr(0, found);
				end = line.substr(found + before.length(), line.length());
				start.append(after);
				start.append(end);
				std::cout << start << std::endl;
				line = start;
				std::cout << "Found one at:" << found << std::endl;
				found += found + before.length();
			}
			replace << start << std::endl;
		}
		else
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