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
			virtual const char* what() const throw() // Cette ligne déclare une méthode virtuelle `what` qui retourne un message d'erreur sous forme de chaîne de caractères, ne modifie pas l'objet, et ne lance pas d'exception. Elle est typiquement utilisée dans les classes d'exception pour fournir des messages d'erreur descriptifs.
			{
				return ("Grade is too high.\n");
			}
	};

	class GradeTooLowException : public std::exception
	{
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