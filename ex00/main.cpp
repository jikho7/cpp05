#include "Bureaucrat.hpp"

int main()
{
    std::cout << "TEST 1 : no exception (42, James)" << std::endl;
    try
    {
        Bureaucrat  James(42, "James");
        std::cout << James << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << "TEST 2 : too high (0, Jim)" << std::endl;
    try
    {
        Bureaucrat  Jim(0, "Jim");
        std::cout << Jim << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << "TEST 3 : too low (151, JimLow)" << std::endl;
    try
    {
        Bureaucrat  Jim(151, "JimLow");
        std::cout << Jim << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << "TEST 4 : Incrementation (2, Ju)" << std::endl;
    try
    {
        Bureaucrat  Ju(2, "Ju");

        std::cout << Ju << std::endl;

        Ju.incrementGrade();
        std::cout << Ju << std::endl;

        Ju.incrementGrade();
        std::cout << Ju << std::endl;

        Ju.incrementGrade();
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << "TEST 5 : decrementation (149, Plop)" << std::endl;
    try
    {
        Bureaucrat  Plop(149, "Plop");

        std::cout << Plop << std::endl;

        Plop.decrementGrade();
        std::cout << Plop << std::endl;

        Plop.decrementGrade();
        std::cout << Plop << std::endl;
        
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
       std::cerr << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    return(0);
}