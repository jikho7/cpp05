#include "AForm.hpp"

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

AForm::AForm() : _gradeToSign(0), _gradeToExecute(0){}

AForm::AForm(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (this->getAbleToSign() > 150)
        throw GradeTooLowException();
    if (this->getAbleToSign() < 1)
        throw GradeTooHighException();
}

AForm::~AForm(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

AForm::AForm(const AForm& other) : _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute){
    *this = other;}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
    }
    return *this;
}

// ##################################################################
//                           GETTERS                                #
// ##################################################################

std::string AForm::getName()const{
    return this->_name;}

bool AForm::getSigned()const{
    return this->_signed;}

int AForm::getAbleToSign()const{
    return this->_gradeToSign;}

int AForm::getGradeToExecute()const{
    return this->_gradeToExecute;}

// ##################################################################
//                           SETTERS                                #
// ##################################################################


// ##################################################################
//                            Methodes                              #
// ##################################################################

void AForm::validityVerification(Bureaucrat const &executor) const
{
    if (!this->getSigned())
    {
        std::cout << executor.getName() << " couldn't execute because the ";
        throw NotSigned();
    }
    else if (executor.getGrade() > this->getGradeToExecute())
    {
        std::cout << executor.getName() << " couldn't execute because ";
        throw GradeTooHighException();
    }
}
bool AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getAbleToSign())
    {
        this->_signed = true;
        return true;
    }
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName() << " execute " << std::endl;
}

// ##################################################################
//                            Surcharges                            #
// ##################################################################

std::ostream& operator<<(std::ostream& os, AForm& form)
{
    os << form.getName() << " is ";
    if (form.getSigned() == 1)
        os << "not signed.\n";
    else
        os << "signed.\n";
    
    os << "A grade of " << form.getAbleToSign() << " is needed to sign it.\n" << "A grade of " << form.getGradeToExecute() << " is needed to execute." << std::endl;

    return os;
}

