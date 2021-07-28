#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
:_name(name), _grade(grade)
{
	if (_grade <= 0)
		throw GradeTooHighException();
	else if (_grade >= 151)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
:_name(other._name), _grade(other._grade)
{
	if (_grade <= 0)
		throw GradeTooHighException();
	else if (_grade >= 151)
		throw GradeTooLowException();
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	// _name = other._name;
	std::cout << _name << std::endl;
	_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	_grade--;
	if (_grade <= 0)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade >= 151)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << "<" << b.getName() << ">, bureaucrat grade <" << b.getGrade() << ">" << std::endl;
	return (os);
}
