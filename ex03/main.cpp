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

    std::cout << YELLOW << "Test Valid Form 1" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << "Is signed : " << rrf->getSigned() << std::endl;
        Dan.executeForm(*rrf);

    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "Test Valid Form 2" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Dan.signForm(*rrf);
        Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "Test Valid Form 3" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Dan(1, "Dan");
        AForm *rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

        std::cout << " Is signed : " << rrf->getSigned() << std::endl;
        Dan.signForm(*rrf);
        std::cout << " Is signed : " << rrf->getSigned() << std::endl;
        Dan.executeForm(*rrf);
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "Test Invalid Form 1" << RESET << std::endl;
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
        std::cerr << e.what() << std::endl;
    }

    std::cout << YELLOW << "Test Invalid Form 2" << RESET << std::endl;
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
        std::cerr << e.what() << std::endl;
    }


    std::cout << YELLOW << "Test Invalid target" << RESET << std::endl;
    try
    {
        Intern someRandomIntern;
        AForm *rrf;

        rrf = someRandomIntern.makeForm("presidential pardon", "");

        if(rrf){}
    }
    catch (Intern::InvalidName &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (AForm::InvalidTarget &e) {
        std::cerr << "InvalidName exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}