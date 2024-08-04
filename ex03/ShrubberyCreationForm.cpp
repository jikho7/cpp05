#include "ShrubberyCreationForm.hpp"

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
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

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

// ##################################################################
//                           SETTERS                                #
// ##################################################################


// ##################################################################
//                            Methodes                              #
// ##################################################################

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw NotSigned();

    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();

    std::ofstream file(this->getTarget().c_str());
    if (file.is_open())
    {
        file << "     ooo    \n";
        file << "    o'oooo   \n";
        file << "   oooo'ooo    \n";
        file << "    ooo'oo   \n";
        file << "     oooo    \n";
        file << "      ||    \n";
        file << "      ||    \n";
        file << "      /|   \n";
        file.close();
    }
    else
        std::cerr << "Error opening file." << std::endl;
}