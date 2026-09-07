#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    try {
        Bureaucrat Jana("Jana", 10);
        Bureaucrat Michal("Michal", 149);

        ShrubberyCreationForm form1("home");
        Jana.signForm(form1);
        Jana.executeForm(form1);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}