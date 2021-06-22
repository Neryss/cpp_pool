#include <iostream>
#include <string>

int	main(void)
{
	std::string	str;

	std::getline(std::cin, str);
	for (int i = 0; i < (int)str.length(); i++)
		putchar(toupper(str[i]));
	putchar('\n');
	return (0);
}
