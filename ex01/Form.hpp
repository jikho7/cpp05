#ifndef FORM
#define FORM

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
        
        bool                beSigned(Bureaucrat& bureaucrat);

    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(const Form &other);
        Form&               operator=(const Form& other);

        class GradeTooHighException : public std::exception
        {
            public:

            virtual const char* what() const throw()
            {
                return ("grade is too high. (form)\n");
            }
        };

        class GradeTooLowException : public std::exception
        {
            public:

            virtual const char* what() const throw()
            {
                return ("grade is too low. (form)\n");
            }
        };

        const std::string   getName()const;
        bool                getSigned()const;
        int                 getAbleToSign()const;
        int                 getGradeToExecute()const;
    };

std::ostream&               operator<<(std::ostream& os, Form& Form);

#endif