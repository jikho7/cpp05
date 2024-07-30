#include "Form.hpp"

    Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(1), _ableToSign(gradeToSign), _gradeToExecute(gradeToExecute)
    {
    }

    Form::~Form(){}

    Form& Form::operator=(const Form& other)
    {
        if (this != &other)
        {
            this->_name = other._name;
            this->_signed = other._signed;

        }
        return *this;
    }

    Form::Form(const Form &other) : _ableToSign(other._ableToSign), _gradeToExecute(other._gradeToExecute)
    {
        *this = other;
    }

    std::string Form::getName()const{
        return this->_name;
    }

    bool Form::getSigned()const
    {
        return this->_signed;
    }

   int Form::getAbleToSign()const
    {
        return this->_ableToSign;
    }

    int Form::getGradeToExecute()const
    {
        return this->_gradeToExecute;
    }

    std::ostream& operator<<(std::ostream& os, Form& form)
    {
        os << form.getName() << " is ";
        if (form.getSigned() == 1)
            os << "not signed.\n";
        else
            os << "signed.\n";
        os << "A grade of " << form.getAbleToSign() << " is needed to sign it.\n" << "A grade of " << form.getGradeToExecute() << " is needed to execute." << std::endl;

        return os;
    }