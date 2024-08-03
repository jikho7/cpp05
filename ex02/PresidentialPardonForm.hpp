#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "AForm.hpp"

//class Aform;

class PresidentialPardonForm : public AForm
{
    private:
    
    std::string _target;

    public:

    PresidentialPardonForm(std::string target);
    PresidentialPardonForm();
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    void doSomething();
    std::string getTarget() const;
};

#endif