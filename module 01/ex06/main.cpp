#include "Harl.hpp"

int main(int argc, char *argv[]) {
    Harl person;

    if (argc != 2){
        std::cerr << "Wrong input. Add some complains Harl should have..\n";
        return 1;
    }
    std::string level = argv[1];
    person.complain(level);
    return 0;
}
