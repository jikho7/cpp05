#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::srand(std::time(0));

    std::cout << YELLOW << "Test 1 : Jim, grade 24, Form sign(25), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat Jim(24, "Jim");
        PresidentialPardonForm Sam("Sam");

        std::cout << " Is signed : " << Sam.getSigned() << std::endl;
        Jim.signForm(Sam);
        std::cout << " Is signed : " << Sam.getSigned() << std::endl;
        Jim.executeForm(Sam);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 2 : Jimm, grade 28, Form sign(25), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat Jimm(28, "Jimm");
        PresidentialPardonForm Samm("Samm");

        std::cout << " Is signed : " << Samm.getSigned() << std::endl;
        Jimm.signForm(Samm);
        std::cout << " Is signed : " << Samm.getSigned() << std::endl;
        Jimm.executeForm(Samm);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 3 : Jimmm, grade 1, Form sign(25), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat Jimmm(1, "Jimmm");
        PresidentialPardonForm Sammm("Sammm");

        //Jimmm.signForm(Sammm);
        std::cout << " Is signed : " << Sammm.getSigned() << std::endl;
        Jimmm.executeForm(Sammm);
        std::cout << " Is signed : " << Sammm.getSigned() << std::endl;

    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 4 : Jimmm0, grade 0, Form sign(25), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat Jimmm0(0, "Jimmm0");
        PresidentialPardonForm Sammm("Sammm");

        Jimmm0.signForm(Sammm);
        Jimmm0.executeForm(Sammm);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 5 : Zac, grade 73, Form sign(72), execute(45)" << RESET << std::endl;
    try
    {
        Bureaucrat Zac(73, "Zac");
        RobotomyRequestForm Do("Do");

        Zac.signForm(Do);
        Zac.executeForm(Do);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 6 : Zacc, grade 46, Form sign(72), execute(45)" << RESET << std::endl;
    try
    {
        Bureaucrat Zacc(46, "Zacc");
        RobotomyRequestForm Doo("Doo");

        std::cout << "Is signed : " << Doo.getSigned() << std::endl;
        Zacc.signForm(Doo);
        std::cout << "Is signed : " << Doo.getSigned() << std::endl;
        Zacc.executeForm(Doo);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 7 : Zaccc, grade 1, Form sign(72), execute(45)" << RESET << std::endl;
    try
    {
        Bureaucrat Zaccc(1, "Zaccc");
        RobotomyRequestForm Dooo("Dooo");

        Zaccc.signForm(Dooo);
        Zaccc.executeForm(Dooo);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 8 : Lo, grade 146, Form sign(145), execute(137)" << RESET << std::endl;
    try
    {
        Bureaucrat Lo(146, "Lo");
        ShrubberyCreationForm Tree("Tree");

        Lo.signForm(Tree);
        Lo.executeForm(Tree);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 9 : Loo, grade 138, Form sign(145), execute(137)" << RESET << std::endl;
    try
    {
        Bureaucrat Loo(138, "Loo");
        ShrubberyCreationForm Treee("Name");

        Loo.signForm(Treee);
        Loo.executeForm(Treee);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    std::cout << std::endl;
    std::cout << YELLOW << "Test 9 : Looo, grade 1, Form sign(145), execute(137)" << RESET << std::endl;
    try
    {
        Bureaucrat Looo(1, "Looo");
        ShrubberyCreationForm Treeee("Name2");

        Looo.signForm(Treeee);
        Looo.executeForm(Treeee);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    return (0);
}