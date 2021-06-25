#include "Contact.hpp"

int	add_contact(contact *book, int i)
{
	std::string	input;
	std::string	tmp;
	if (i >= 8)
		return (1);
	book[i].id = i;
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, book[i].f_name);
	if ((int)book[i].f_name.length() > 10)
	{
		tmp = book[i].f_name.substr(0, 10);
		tmp[9] = '.';
	}
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, book[i].l_name);
	if ((int)book[i].l_name.length() > 10)
	{
		tmp = book[i].l_name.substr(0, 10);
		tmp[9] = '.';
	}
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, book[i].n_name);
	if ((int)book[i].n_name.length() > 10)
	{
		tmp = book[i].n_name.substr(0, 10);
		tmp[9] = '.';
	}
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
	std::cout << "Contact registered as nb: " << book[i].id << std::endl;
	return (0);
}

void	display_book(contact *book, int i)
{
	int			index = 0;
	std::string	tmp;
	for (int j = 0; j < i; j++)
	{
		std::cout.width(10);
		std::cout << std::right << book[j].id;
		std::cout << '|';
		std::cout.width(10);
		if ((int)book[j].f_name.length() > 10)
		{
			tmp = book[j].f_name.substr(0, 10);
			tmp[9] = '.';
		}
		else
			tmp = book[j].f_name;
		std::cout << std::right << tmp;
		std::cout << '|';
		std::cout.width(10);
		if ((int)book[j].l_name.length() > 10)
		{
			tmp = book[j].l_name.substr(0, 10);
			tmp[9] = '.';
		}
		else
			tmp = book[j].l_name;
		std::cout << std::right << tmp;
		std::cout << '|';
		std::cout.width(10);
		if ((int)book[j].n_name.length() > 10)
		{
			tmp = book[j].n_name.substr(0, 10);
			tmp[9] = '.';
		}
		else
			tmp = book[j].n_name;
		std::cout << std::right << tmp << std::endl;
	}
	if (i)
	{
		std::cout << "Chose the desired contact index" << std::endl;
		std::cin >> index;
		if (index < 0 || index >= i)
		{
			std::cout << "Error: Invalid index" << std::endl;
			return ;
		}
		std::cout << book[index].f_name << std::endl;
		std::cout << book[index].l_name << std::endl;
		std::cout << book[index].n_name << std::endl;
		std::cout << book[index].login << std::endl;
		std::cout << book[index].postal << std::endl;
		std::cout << book[index].mail << std::endl;
		std::cout << book[index].phone << std::endl;
		std::cout << book[index].bday << std::endl;
		std::cout << book[index].meal << std::endl;
		std::cout << book[index].underwear << std::endl;
		std::cout << book[index].secret << std::endl;
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
				std::cout << "Max number of contact reached" << std::endl;
		}
		else if (input == "SEARCH")
			display_book(book, i);
	}
	return (0);
}