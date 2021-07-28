#ifndef	SHRUBBERY_HPP
#define	SHRUBBERY_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		std::string	getTarget();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
};

#endif