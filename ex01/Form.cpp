#include "Form.hpp"

    Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
    {
        if (this->getAbleToSign() > 150)
            throw GradeTooLowException();
        if (this->getAbleToSign() < 1)
            throw GradeTooHighException();
        if (this->getGradeToExecute() > 150)
            throw GradeTooLowException();
        if (this->getGradeToExecute() < 1)
            throw GradeTooHighException();
        
    }

    Form::~Form(){}

    Form& Form::operator=(const Form& other)
    {
        if (this != &other)
        {
            this->_signed = other._signed;
        }
        return *this;
    }

    Form::Form(const Form &other) : _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
    {
        *this = other;
    }

    const std::string Form::getName()const{
        return this->_name;
    }

    bool Form::getSigned()const
    {
        return this->_signed;
    }

   int Form::getAbleToSign()const
    {
        return this->_gradeToSign;
    }

    int Form::getGradeToExecute()const
    {
        return this->_gradeToExecute;
    }

    bool Form::beSigned(Bureaucrat &bureaucrat)
    {
        if (bureaucrat.getGrade() <= this->getAbleToSign())
        {
            this->_signed = true;
            return true;
        }
        else
            throw GradeTooLowException();
    }

    std::ostream& operator<<(std::ostream& os, Form& form)
    {
        os << form.getName() << " is ";
        if (form.getSigned() == 0)
            os << "not signed.\n";
        else
            os << "signed.\n";
        os << "A grade of " << form.getAbleToSign() << " is needed to sign it.\n" << "A grade of " << form.getGradeToExecute() << " is needed to execute." << std::endl;

        return os;
    }