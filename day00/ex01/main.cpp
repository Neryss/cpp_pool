#include "Contact.hpp"

int	max_cont = 0;

int	add_contact(contact *book, int &index)
{
	std::string	input;
	std::string	tmp;
	int			ret;

	ret = 0;
	if (index >= 8)
	{
		ret = 1;
		index = 0;
	}
	book[index].id = index;
	std::cout << "Enter first name" << std::endl;
	std::cin.clear();
	std::cin.ignore();
	std::getline(std::cin, book[index].f_name);
	if ((int)book[index].f_name.length() > 10)
	{
		tmp = book[index].f_name.substr(0, 10);
		tmp[9] = '.';
	}
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, book[index].l_name);
	if ((int)book[index].l_name.length() > 10)
	{
		tmp = book[index].l_name.substr(0, 10);
		tmp[9] = '.';
	}
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, book[index].n_name);
	if ((int)book[index].n_name.length() > 10)
	{
		tmp = book[index].n_name.substr(0, 10);
		tmp[9] = '.';
	}
	std::cout << "Enter login" << std::endl;
	std::getline(std::cin, book[index].login);
	std::cout << "Enter postal code" << std::endl;
	std::getline(std::cin, book[index].postal);
	std::cout << "Enter email" << std::endl;
	std::getline(std::cin, book[index].mail);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, book[index].phone);
	std::cout << "Enter birth date" << std::endl;
	std::getline(std::cin, book[index].bday);
	std::cout << "Enter favorite meal" << std::endl;
	std::getline(std::cin, book[index].meal);
	std::cout << "Enter your underwear color" << std::endl;
	std::getline(std::cin, book[index].underwear);
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin, book[index].secret);
	std::cout << "Contact registered as nb: " << book[index].id << std::endl;
	std::cin.clear();
	index++;
	return (ret);
}

void	display_book(contact *book, int i)
{
	int			index = 0;
	std::string	tmp;
	for (int j = 0; j < max_cont; j++)
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
		if (std::cin.fail())
		{
			std::cout << "Error: Cin failed" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return ;
		}
		else if (index < 0 || index >= i)
		{
			std::cout << "Error: Invalid index" << std::endl;
			std::cin.clear();
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
		std::cin.clear();
		std::cin >> input;
		if (input == "EXIT")
			exit = true;
		else if (input == "ADD")
		{
			add_contact(book, i);
			if (max_cont < 8)
				max_cont++;
		}
		else if (input == "SEARCH")
			display_book(book, i);
		input = "";
	}
	return (0);
}