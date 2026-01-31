#include "Harl.hpp"

int main(void) {
    Harl person;

    person.complain("debug");
    person.complain("info");
    person.complain("warning");
    person.complain("error");
    return 0;
}