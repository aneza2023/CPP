#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::string nameRob = "Robert";
    std::string nameJul = "Julia";
    std::string nameVal = "Valeria";
    ClapTrap Robert(nameRob);
    ScavTrap Julia(nameJul);
    FragTrap Valeria(nameVal);

    std::cout << std::endl;
    Valeria.attack("someone");
    Valeria.takeDamage(5);
    Valeria.beRepaired(10);
    Valeria.highFivesGuys();
    std::cout << std::endl;
    return (0);
}