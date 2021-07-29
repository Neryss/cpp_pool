#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int			_sGrade;
		const int			_exGrade;
		bool				_signed;
		Form();
	public:
		Form(const std::string name, const int sgrade, const int exgrade);
		Form(const Form &other);
		virtual ~Form();
		Form	&operator=(const Form &other);
		std::string	getName() const;
		bool		getSigned() const;
		int			getSGrade() const;
		int			getExGrade() const;
		void		beSigned(const Bureaucrat &b);
		virtual void		execute(const Bureaucrat &executor) const = 0;
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
		class NotSigned : public std::exception
		{
			const char *what () const throw ()
			{
				return ("Form isn't signed");
			}
		};
};

std::ostream	&operator<<(std::ostream &os, const Form &f);

#endif