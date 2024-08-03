#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form(SCF)", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form(SCF)", 145, 137), _target(target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    (void)other;
    return *this;
}

void ShrubberyCreationForm::doSomething()
{
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

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}