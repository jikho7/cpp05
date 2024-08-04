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

    try
    {
        Bureaucrat Jim(24, "Jim");
        PresidentialPardonForm Sam("Sam");

        Jim.signForm(Sam);
        Jim.executeForm(Sam);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Jimm(28, "Jimm");
        PresidentialPardonForm Samm("Samm");

        Jimm.signForm(Samm);
        Jimm.executeForm(Samm);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Jimmm(1, "Jimmm");
        PresidentialPardonForm Sammm("Sammm");

        Jimmm.signForm(Sammm);
        Jimmm.executeForm(Sammm);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

        try
    {
        Bureaucrat Jimmm0(0, "Jimmm0");
        PresidentialPardonForm Sammm("Sammm");

        Jimmm0.signForm(Sammm);
        Jimmm0.executeForm(Sammm);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Zac(73, "Zac");
        RobotomyRequestForm Do("Do");

        Zac.signForm(Do);
        Zac.executeForm(Do);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Zacc(46, "Zacc");
        RobotomyRequestForm Doo("Doo");

        Zacc.signForm(Doo);
        Zacc.executeForm(Doo);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Zaccc(1, "Zaccc");
        RobotomyRequestForm Dooo("Dooo");

        Zaccc.signForm(Dooo);
        Zaccc.executeForm(Dooo);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}
    
    try
    {
        Bureaucrat Lo(146, "Lo");
        ShrubberyCreationForm Tree("Tree");

        Lo.signForm(Tree);
        Lo.executeForm(Tree);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Loo(138, "Loo");
        ShrubberyCreationForm Treee("Treee");

        Loo.signForm(Treee);
        Loo.executeForm(Treee);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    try
    {
        Bureaucrat Looo(1, "Looo");
        ShrubberyCreationForm Treeee("Treeee");

        Looo.signForm(Treeee);
        Looo.executeForm(Treeee);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;}

    return (0);
}