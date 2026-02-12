#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDmg = 30;
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDmg = 30;
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap &orig) : ClapTrap(orig) {
    *this = orig;
    std::cout << "FragTrap copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &orig) {
    if (this != &orig)
        ClapTrap::operator=(orig);
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << this->_name << " Destructor called\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests high five!\n";
}