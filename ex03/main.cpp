#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    std::srand(std::time(0));

    std::cout << YELLOW << "Test Valid Form" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
        Dan.executeForm(*rrf);

    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }

    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");

       Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }

    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");

       Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }

    std::cout << YELLOW << "Test Invalid Form" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");

        AForm *rrf;

        rrf = someRandomIntern.makeForm("Rhjkhkhjorm", "Bender");

        Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }

    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");

        AForm *rrf;

        rrf = someRandomIntern.makeForm("", "Bender");

        Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }


    std::cout << YELLOW << "Test Invalid target" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        AForm *rrf;

        rrf = someRandomIntern.makeForm("Presidential Pardon", "");

        if(rrf){}
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (AForm::InvalidTarget &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "std::exception: " << e.what() << std::endl;
    }

    return (0);
}