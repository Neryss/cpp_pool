#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5), _target(other._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	_target = other._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget()
{
	return (_target);
}

void		PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getSigned())
		throw NotSigned();
	else if (executor.getGrade() > getExGrade())
		throw GradeTooLowException();
	else
		std::cout << executor.getName() << " has beem pardoned by Zafod Beeblebrox" << std::endl;
}