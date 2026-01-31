#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    std::string nameRob = "Robert";
    std::string nameJul = "Julia";
    std::string nameVal = "Valeria";
    std::string nameJoh = "Johny";
    ClapTrap Robert(nameRob);
    ScavTrap Julia(nameJul);
    FragTrap Valeria(nameVal);
    DiamondTrap Johny(nameJoh);

    std::cout << std::endl;
    Johny.attack("someone");
    Johny.takeDamage(5);
    Johny.beRepaired(10);
    Johny.whoAmI();
    std::cout << std::endl;
    return (0);
}