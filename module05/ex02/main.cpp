#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    try {
        Bureaucrat Jana("Jana", 10);
        Bureaucrat Michal("Michal", 149);
        Jana.incrementGrade();
        std::cout << Jana << std::endl;
        std::cout << Michal << std::endl;
        ShrubberyCreationForm newForm("olzmpic");
        Jana.signForm(newForm);
        newForm.execute(Michal);
        std::cout << std::endl;
        std::cout << newForm <<std::endl;
        // Bureaucrat Martin("Martin", 0);
        // Bureaucrat David("David", 156);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}