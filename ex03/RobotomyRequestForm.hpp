#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:

    std::string     _target;

    public:
    // Constructor and destructor
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();

    // Copy constructor and assignement copy
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    // Methodes
    virtual void    execute(Bureaucrat const & executor) const;

    // Getteurs
    std::string     getTarget() const;
};

#endif