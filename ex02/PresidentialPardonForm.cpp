#include "PresidentialPardonForm.hpp"

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5), _target(target){}
PresidentialPardonForm::~PresidentialPardonForm(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{ 
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }
    return *this;
}

// ##################################################################
//                           GETTERS                                #
// ##################################################################

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

// ##################################################################
//                           SETTERS                                #
// ##################################################################


// ##################################################################
//                            Methodes                              #
// ##################################################################

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    validityVerification(executor);
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

