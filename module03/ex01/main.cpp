#include "ScavTrap.hpp"

int main(void) {
    std::string nameRob = "Robert";
    std::string nameJul = "Julia";
    ClapTrap Robert(nameRob);
    ScavTrap Julia(nameJul);
    // ClapTrap Petr(Robert);

    Julia.guardGate();
    Julia.attack(nameRob);

    return (0);
}