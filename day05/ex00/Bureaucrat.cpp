#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
:_name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
:_name(other._name), _grade(other._grade)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	_name = other._name;
	_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

