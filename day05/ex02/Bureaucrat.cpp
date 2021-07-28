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

void	Bureaucrat::signForm(Form &f)
{
	if (_grade > f.getSGrade())
		std::cout << _name << " cannot sign " << f.getName() << " because grade is too low" << std::endl;
	else if (f.getSigned())
		std::cout << _name << " cannot sign " << f.getName() << " because the form is already signed" << std::endl;
	else
	{
		std::cout << _name << " signs " << f.getName() << std::endl;
		f.beSigned(*this);
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << "<" << b.getName() << ">, bureaucrat grade <" << b.getGrade() << ">" << std::endl;
	return (os);
}
