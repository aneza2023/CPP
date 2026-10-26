#include "RPN.hpp"

int main(int ac, char *av[]) {

    if (ac != 2) {

        std::cerr << "Error: wrong number of arguments" << std::endl; 
        return 1;
    }
    else {
        try {
            rpn cal;
            cal.runRPN(av[1]);
        }
        catch (std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
        }

    }
    return 0;
}