#include"Bureaucrat.hpp"

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

Bureaucrat::Bureaucrat(int grade, const std::string name) : _grade(grade), _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _grade(other._grade), _name(other._name)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{   
    if (this != &other)
    {
        this->_grade = other._grade;
    }

    return (*this);
}

// ##################################################################
//                           GETTERS                                #
// ##################################################################

std::string	Bureaucrat::getName() const{
    return (this->_name);}

int	Bureaucrat::getGrade() const{
    return (this->_grade);}

// ##################################################################
//                           SETTERS                                #
// ##################################################################


// ##################################################################
//                            Methodes                              #
// ##################################################################

void Bureaucrat::incrementGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm& form)
{
    if (this->getGrade() <= form.getAbleToSign())
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    else
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because "; 
        throw AForm::GradeTooHighException();
    }
}

void Bureaucrat::executeForm(AForm const & form)
{   
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

// ##################################################################
//                            Surcharges                            #
// ##################################################################

std::ostream &operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}