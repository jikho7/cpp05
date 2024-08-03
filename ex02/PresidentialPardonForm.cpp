#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form (PPF)", 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form (PPF)", 25, 5), _target(target){}
PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
    
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    (void)other;
   // if (this != other)
        return *this;
}

void PresidentialPardonForm::doSomething()
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}