#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

// ##################################################################
//                    Constructor && Destructor                     #
// ##################################################################

Intern::Intern(){}
Intern::~Intern(){}

// ##################################################################
//		constructeur par copie et operateur d'affectation		   #
// ##################################################################

Intern::Intern(const Intern &other){
    *this = other;}

Intern& Intern::operator=(const Intern &other){
    (void)other;
    return *this;
}

// ##################################################################
//		                    Methodes		                       #
// ##################################################################

AForm* createPresidentialPardonForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* createRobotomyRequestForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* createShrubberyCreationForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string targetName) {
    const std::string names[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    
    AForm* (*constructors[])(const std::string&) = {
        createPresidentialPardonForm,
        createRobotomyRequestForm,
        createShrubberyCreationForm
    };

    for (int i = 0; i < 3; i++) {
        if (formName == names[i]) {
            AForm* form = constructors[i](targetName);
            std::cout << "Intern creates " << formName << std::endl;
            return form;
        }
    }

    //std::cerr << "Error: Form name " << formName << " does not exist." << std::endl;
    throw InvalidName();
}