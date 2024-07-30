#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    std::string _name;
    bool _signed;
    const int _ableToSign;
    const int _gradeToExecute;

    public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(const Form &other);
    Form& operator=(const Form& other);

    class GradeTooHighException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Grade too high.\n");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Grade too low.\n");
        }
    };

    std::string getName()const;
    bool getSigned()const;
    int getAbleToSign()const;
    int getGradeToExecute()const;
};

std::ostream& operator<<(std::ostream& os, Form& Form);