#ifndef SHRUBBERY_HPP   
#define SHRUBBERY_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
    
    std::string _target;

    public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

    void doSomething();
    std::string getTarget() const;
};

#endif