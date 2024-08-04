#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotmy Request Form", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotmy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw NotSigned();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "\n...drilling noises...\n" << std::endl; //Makes some drilling noises.
    if (std::rand() % 2 == 1)
        std::cout << executor.getName() << " has been robotomized. \n" << std::endl; //Then, informs that <target> has been robotomized
    else
        std::cout << executor.getName() << " has not been robotomized.\n" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}