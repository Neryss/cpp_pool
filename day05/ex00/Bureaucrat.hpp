#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade; // [1-150]
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		Bureaucrat	&operator=(const Bureaucrat &other);
		class GradeTooHighException : std::exception
		{
			public:
				const char	*what () const throw ()
				{
					return ("Grade too high exception!\n");
				}
		};
		class GradeTooLowException : std::exception
		{
			public:
				const char	*what () const throw ()
				{
					return ("Grade too low exception!\n");
				}
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);

#endif