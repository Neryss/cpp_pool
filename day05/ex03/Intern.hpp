#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern	&operator=(const Intern &other);
		~Intern();
		Form	*makeForm(std::string form, std::string target);
		Form	*presidential(std::string target);
		Form	*robotomy(std::string target);
		Form	*shrubbery(std::string target);
};

#endif