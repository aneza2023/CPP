#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
//ADDED and ex02
#include <cstlib>
#include <ctime>

int main(void) {
    try {
        //ADDED!! and ex02
        srand(time(NULL));
        Intern someRandomIntern;
        Bureaucrat b("Bender", 1);
        AForm* rrf;
        // AForm* rrr;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        // rrr = someRandomIntern.makeForm("juchuuuu", "Bender");
        if (rrf == NULL) {
            std::cout << "Error: Form was not created" << std::endl;
            return 1;
        }
        std::cout << "--" << std::endl;
        b.signForm(*rrf);
        rrf->execute(b);
        // rrf->execute(b);
        // b.signForm(*rrr);

        delete rrf;
        // delete rrr;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}