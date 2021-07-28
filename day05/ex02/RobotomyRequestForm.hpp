#ifndef	ROBOTOMY_HPP
#define	ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		std::string	getTarget();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
		void		execute(const Bureaucrat &executor) const;
};

#endif