#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	int					_grade;
	const std::string	_name;

	public :
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Grade is too high.\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Grade is too low.\n");
		}
	};

	// Constructor and destructor
	Bureaucrat();
	Bureaucrat(int grade, const std::string name);
	~Bureaucrat();

	// Copy constructor and assignement copy
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	std::string		getName() const;
	int				getGrade() const;
	void			incrementGrade();
	void			decrementGrade();

};

std::ostream &operator<<(std::ostream& os, Bureaucrat& bureaucrat);