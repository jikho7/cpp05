#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotmy Request Form(RRF)", 45, 72){}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotmy Request Form(RRF)", 45, 72), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    (void)other;
    return *this;
}

void RobotomyRequestForm::doSomething()
{
    std::cout << "...drilling noises...\n" << std::endl; //Makes some drilling noises.
    if (std::rand() %2 == 0)
        std::cout << this->getTarget() << " has been robotomized." << std::endl; //Then, informs that <target> has been robotomized
    else
    std::cout << " has not been robotomized :(" << std::endl;
    //successfully 50% of the time. Otherwise, informs that the robotomy failed.
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}