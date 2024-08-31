#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :

    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    
    protected:
    void    validityVerification(Bureaucrat const &executor) const;

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
            return ("Form is not signed.\n");}
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
    bool            beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, AForm& Form);

#endif