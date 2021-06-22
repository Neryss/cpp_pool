#include "Contact.hpp"

int	add_contact(contact *book, int i)
{
	std::string	input;
	if (i >= 8)
		return (1);
	book->id = i + 1;
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, book->f_name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, book->l_name);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, book->n_name);
	std::cout << "Enter login" << std::endl;
	std::getline(std::cin, book->login);
	std::cout << "Enter postal code" << std::endl;
	std::getline(std::cin, book->postal);
	std::cout << "Enter email" << std::endl;
	std::getline(std::cin, book->mail);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, book->phone);
	std::cout << "Enter birth date" << std::endl;
	std::getline(std::cin, book->bday);
	std::cout << "Enter favorite meal" << std::endl;
	std::getline(std::cin, book->meal);
	std::cout << "Enter your underwear color" << std::endl;
	std::getline(std::cin, book->underwear);
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin, book->secret);
	std::cout << "Contact registered as nb: " << book->id << std::endl;
	return (0);
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
	}
	return (0);
}