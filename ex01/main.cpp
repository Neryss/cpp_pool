#include "Contact.hpp"

int	main(void)
{
	std::string	input;
	bool 		exit;
	contact		book[8];

	exit = false;
	while (!exit)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			exit = true;
	}
	return (0);
}