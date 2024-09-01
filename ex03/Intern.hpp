#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <exception>

class AForm;

class Intern
{

    public :
    class InvalidName : public std::exception
    {
        public :
        virtual const char* what() const throw(){
            return("Invalid Name.\n");}
    };

    // Constructor and destructor
    Intern();
    ~Intern();

    // Copy constructor and assignement copy
    Intern(const Intern &other);
    Intern& operator=(const Intern &other);


    AForm* makeForm(std::string formName, std::string targetName);
};

#endif
