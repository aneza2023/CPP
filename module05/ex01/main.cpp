#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat Jana("Jana", 10);
        Jana.incrementGrade();
        std::cout << Jana << std::endl;
        Form newForm("new coffee machine form", 50, 50);
        Jana.signForm(newForm);
        std::cout << newForm <<std::endl;
        // Bureaucrat Martin("Martin", 0);
        // Bureaucrat David("David", 156);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}