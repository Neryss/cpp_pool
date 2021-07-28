#include "Form.hpp"

Form::Form(const std::string name, const int sgrade, const int exgrade)
:_name(name), _sGrade(sgrade), _exGrade(exgrade)
{
	if (_sGrade <= 0 || _exGrade <= 0)
		throw GradeTooHighException();
	else if (_sGrade >= 151 || _exGrade >= 151)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
:_name(other._name), _sGrade(other._sGrade), _exGrade(other._exGrade), _signed(other._signed)
{
	if (_sGrade <= 0 || _exGrade <= 0)
		throw GradeTooHighException();
	else if (_sGrade >= 151 || _exGrade >= 151)
		throw GradeTooLowException();
}

Form	&Form::operator=(const Form &other)
{
	_signed = other._signed;
	return (*this);
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return (_name);
}

int	Form::getSGrade() const
{
	return (_sGrade);
}

int	Form::getExGrade() const
{
	return (_exGrade);
}

bool	Form::getSigned() const
{
	return (_signed);
}

std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	os << "<" << f.getName() << ">, sgrade : " << f.getSGrade() << " exGrade : " << f.getExGrade() << " signed : " << f.getSigned() << std::endl;
	return (os);
}
