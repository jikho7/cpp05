#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:

    std::string _target;

    public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    void doSomething();
    std::string getTarget() const;
};

#endif