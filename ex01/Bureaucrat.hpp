#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Form;

class Bureaucrat
{
		int					_grade;
		const std::string	_name;
		Form 				*_form;

	public :
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Bureaucrat grade is too high.\n");
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Bureaucrat grade is too low.\n");
			}
		};

		// Constructor and destructor
		Bureaucrat();
		Bureaucrat(int grade, const std::string name);
		~Bureaucrat();

		// Copy constructor and assignement copy
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat		&operator=(const Bureaucrat &other);
		
		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void 			signForm(Form& form);
};

std::ostream			&operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif