#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    std::string     _name;
    bool            _signed;
    const int       _ableToSign;
    const int       _gradeToExecute;
    
    bool            beSigned(Bureaucrat& bureaucrat);

    public:
    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();
    AForm(const AForm &other);
    AForm& operator=(const AForm& other);

    class GradeTooHighException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Form grade is too high.\n");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("From grade is too low.\n");
        }
    };

    std::string     getName()const;
    bool            getSigned()const;
    int             getAbleToSign()const;
    int             getGradeToExecute()const;
    virtual void    doSomething();
};

std::ostream& operator<<(std::ostream& os, AForm& Form);

#endif