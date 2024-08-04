#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :

    std::string     _name;
    bool            _signed;
    const int       _ableToSign;
    const int       _gradeToExecute;
    
    bool            beSigned(Bureaucrat& bureaucrat);

    public:

    // Constructor and destructor
    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();

    // Copy constructor and assignement copy
    AForm(const AForm &other);
    AForm& operator=(const AForm& other);

    // Exceptions
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw(){
            return ("Grade is too high. (Form)\n");}
    };

    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw(){
            return ("Grade is too low. (Form)\n");}
    };

    class NotSigned : public std::exception
    {
        public:
        virtual const char* what() const throw(){
            return ("Form not signed.\n");}
    };

    class InvalidTarget : public std::exception
    {
        public :
        virtual const char* what() throw(){
            return ("Invalid target.\n");}
    };
    // Methodes
    std::string     getName()const;
    bool            getSigned()const;
    int             getAbleToSign()const;
    int             getGradeToExecute()const;
    virtual void    execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& os, AForm& Form);

#endif