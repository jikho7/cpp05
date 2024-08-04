#ifndef SHRUBBERY_HPP   
#define SHRUBBERY_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
    
    std::string _target;

    public:
    // Constructor and destructor
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();

    // Copy constructor and assignement copy
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

    // Methodes
    virtual void execute(Bureaucrat const & executor) const;

    // Getterus
    std::string getTarget() const;
};

#endif