#include "ClapTrap.hpp"

int main(void) {
    std::string nameRob = "Robert";
    std::string nameJul = "Julia";
    ClapTrap Robert(nameRob);
    ClapTrap Julia(nameJul);

    while (1){
        if (Julia.getEnergyPts() <= 0 || Julia.getHitPoints() <= 0)
            break;
        Robert.attack(Julia.getName());
        Julia.takeDamage(1);
        Robert.beRepaired(1);
    }
    return (0);
}