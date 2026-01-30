#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called\n";
    this->setHitPts(100);
    this->setEnergyPts(100);
    this->setAttackDmg(30);
}

void FragTrap::highFiveGuys(void) {
    std::cout << "FragTrap requests high five\n";
}