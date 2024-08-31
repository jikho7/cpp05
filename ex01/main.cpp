//#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << YELLOW << "Test 1 : Jim, grade 1, Form sign(10), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat  Jim(1, "Jim");
        Form        form1("form1", 10, 5);

        std::cout << form1 << std::endl;
        Jim.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }
    std::cout << std::endl;

    std::cout << YELLOW << "Test 2 : James, grade 100, Form sign(10), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat  James(100, "James");
        Form        form2("form2", 10, 5);

        std::cout << form2 << std::endl;
        James.signForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }
    std::cout << std::endl;

    std::cout << YELLOW << "Test 3 : Plop, grade 10, Form sign(10), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat  Plop(10, "Plop");
        Form        form3("form3", 10, 5);
        
        std::cout << form3 << std::endl;
        Plop.signForm(form3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }
    std::cout << std::endl;

    
    std::cout << YELLOW << "Test 4 : Jimm, grade 1000, Form sign(10), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat  Jimm(1000, "Jimm");
        Form        form4("form4", 10, 5);
    
        std::cout << form4 << std::endl;
        Jimm.signForm(form4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << YELLOW << "Test 5 : Jimmm, grade 1, Form sign(1000), execute(500)" << RESET << std::endl;
    try
    {
        Bureaucrat  Jimmm(1, "Jimmm");
        Form        form5("form5", 1000, 500);
    
        std::cout << form5 << std::endl;
        Jimmm.signForm(form5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << YELLOW << "Test 6 : Ji, grade 0, Form sign(10), execute(5)" << RESET << std::endl;
    try
    {
        Bureaucrat  Ji(0, "Ji");
        Form        form6("form6", 10, 5);
    
        std::cout << form6 << std::endl;
        Ji.signForm(form6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << YELLOW << "Test 7 : Jii, grade 1, Form sign(0), execute(500)" << RESET << std::endl;
    try
    {
        Bureaucrat  Jii(1, "Jii");
        Form        form7("form7", 0, 500);

        std::cout << form7 << std::endl;
        Jii.signForm(form7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    std::cout << YELLOW << "Test 8 : Jii, grade 2, Form sign(1), execute(21)" << RESET << std::endl;
    try
    {
        Bureaucrat  Jii(2, "Jii");
        Form        form7("form7", 1, 21);

        std::cout << form7 << std::endl;
        std::cout << Jii << std::endl;
        //Jii.signForm(form7);
        Jii.incrementGrade();
        std::cout << Jii << std::endl;

        Jii.signForm(form7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;
    }

    return(0);
}