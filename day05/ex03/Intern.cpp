#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Form	*Intern::presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	typedef Form* (Intern::*createForm)(std::string target);
	createForm	array[3] = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};
	std::string	targets[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (form == targets[i])
		{
			std::cout << "The intern has successfuly created a " << targets[i] << " form!" << std::endl;
			return ((this->*array[i])(target));
		}
	}
	std::cout << "The intern couldn't find " << form << ", too bad..." << std::endl;
	return (nullptr);
}