#include "Contact.hpp"

int	add_contact(contact *book, int i)
{
	std::string	input;
	if (i >= 8)
		return (1);
	book->id = i + 1;
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, book[i].f_name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, book[i].l_name);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, book[i].n_name);
	std::cout << "Enter login" << std::endl;
	std::getline(std::cin, book[i].login);
	std::cout << "Enter postal code" << std::endl;
	std::getline(std::cin, book[i].postal);
	std::cout << "Enter email" << std::endl;
	std::getline(std::cin, book[i].mail);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, book[i].phone);
	std::cout << "Enter birth date" << std::endl;
	std::getline(std::cin, book[i].bday);
	std::cout << "Enter favorite meal" << std::endl;
	std::getline(std::cin, book[i].meal);
	std::cout << "Enter your underwear color" << std::endl;
	std::getline(std::cin, book[i].underwear);
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin, book[i].secret);
	std::cout << "Contact registered as nb: " << book->id << std::endl;
	return (0);
}

void	display_book(contact *book, int i)
{
	for (int j = 0; j < i; j++)
	{
		std::cout << std::right << std::setw(10) << book[j].id;
		std::cout << '|';
		std::cout << std::right << std::setw(10) << book[j].f_name;
		std::cout << '|';
		std::cout << std::right << std::setw(10) << book[j].l_name;
		std::cout << '|';
		std::cout << std::right << std::setw(10) << book[j].login << std::endl;
	}
}

int	main(void)
{
	std::string	input;
	bool 		exit;
	contact		book[8];
	int			i;

	exit = false;
	i = 0;
	while (!exit)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			exit = true;
		else if (input == "ADD")
		{
			if (!add_contact(book, i))
				i++;
			else
				std::cout << "Max number of contact reached\n" << std::endl;
		}
		else if (input == "SEARCH")
			display_book(book, i);
	}
	return (0);
}