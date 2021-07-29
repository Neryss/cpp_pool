#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade; // [1-150]
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &f);
		void		executeForm(const Form &form);
		Bureaucrat	&operator=(const Bureaucrat &other);
		class GradeTooHighException : public std::exception
		{
				const char	*what () const throw ()
				{
					return ("Grade too high exception!");
				}
		};
		class GradeTooLowException : public std::exception
		{
				const char	*what () const throw ()
				{
					return ("Grade too low exception!");
				}
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);

#endif