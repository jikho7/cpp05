#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
    
    std::string _target;

    public:
    // Constructor and destructor
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm();
    virtual ~PresidentialPardonForm();

    // Copy constructor and assignement copy
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    // Methodes
    virtual void execute(Bureaucrat const & executor) const;

    // Getteurs
    std::string getTarget() const;
};

#endif