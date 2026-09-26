#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

int main(void) {
    try {
        srand(time(NULL));
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