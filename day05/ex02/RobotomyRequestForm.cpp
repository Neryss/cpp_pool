#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45), _target(other._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	_target = other._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget()
{
	return (_target);
}

void		RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getSigned())
		throw NotSigned();
	else if (executor.getGrade() > getExGrade())
		throw GradeTooLowException();
	else
	{
		srand(time(NULL));
		if (rand() % 2)
			std::cout << executor.getName() << " has been successfully robotomized" << std::endl;
		else
			std::cout << executor.getName() << " has been killed in the process" << std::endl;
	}
}