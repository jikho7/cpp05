#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Jim(24, "Jim");
    PresidentialPardonForm Trump("assange");

    Jim.executeForm(Trump);
    Jim.signForm(Trump);
    return (0);
}