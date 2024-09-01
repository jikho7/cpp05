#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, const std::string name) : _grade(grade), _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

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

Bureaucrat::~Bureaucrat(){}

std::string	Bureaucrat::getName() const
{
    return (this->_name);
}

int	Bureaucrat::getGrade() const
{
    return (this->_grade);
}

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

void Bureaucrat::signForm(Form& form)
{
    if (this->getGrade() <= form.getAbleToSign())
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    else
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
        if (form.getAbleToSign() > this->getGrade())
            throw Form::GradeTooLowException();
        else
            throw Form::GradeTooHighException();

    }

}

std::ostream &operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}
