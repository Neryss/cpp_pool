#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyCreationForm", 145, 137), _target(other._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	_target = other._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget()
{
	return (_target);
}

void		ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getSigned())
		throw NotSigned();
	else if (executor.getGrade() > getExGrade())
		throw GradeTooLowException();
	else
		std::cout << TREE;
}

