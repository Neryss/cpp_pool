#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{
	private:
		const std::string	_name;
		bool				_signed = false;
		const int			_sGrade;
		const int			_exGrade;
		Form();
	public:
		Form(const std::string name, const int sgrade, const int exgrade);
		Form(const Form &other);
		~Form();
		Form	&operator=(const Form &other);
		std::string	getName();
		bool		getSigned();
		int			getSGrade();
		int			getExGrade();
		class GradeTooHighException : public std::exception
		{
			const char *what () const throw ()
			{
				return ("Grade too high");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what () const throw ()
			{
				return ("Grade too low");
			}
		};
};

std::ostream	&operator<<(std::ostream &os, const Form &f);

#endif