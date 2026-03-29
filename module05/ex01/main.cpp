#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat Jana("Jana", 3);
        Jana.incrementGrade();
        std::cout << Jana << std::endl;
        // Bureaucrat Martin("Martin", 0);
        // Bureaucrat David("David", 156);
    }
    catch (Bureaucrat::GradeTooHighException &e){
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}