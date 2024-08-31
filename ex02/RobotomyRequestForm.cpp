#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotmy Request Form", 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotmy Request Form", 72, 45), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

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

// ##################################################################
//                           GETTERS                                #
// ##################################################################

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

// ##################################################################
//                           SETTERS                                #
// ##################################################################


// ##################################################################
//                            Methodes                              #
// ##################################################################

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    validityVerification(executor);
    std::cout << "\n...drilling noises...\n" << std::endl;
    if (std::rand() % 2 == 1)
        std::cout << executor.getName() << " has been robotomized. \n" << std::endl;
    else
        std::cout << "Robotomy failed\n" << std::endl;
}

