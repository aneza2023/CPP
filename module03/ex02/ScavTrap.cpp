#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDmg = 20;
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDmg = 20;
    std::cout << "ScavTrap " << this->_name << " constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &orig) : ClapTrap(orig) {
    *this = orig;
    std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &orig) {
    if (this != &orig) {
        ClapTrap::operator=(orig);
    }
    return *this;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap has now in Gate keeping mode\n";
}

void ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints <= 0) {
        std::cout << "ScavTrap " << this->_name << " has no energy points.\n";
        return ;
    } 
    if (this->_hitPoints <= 0) {
        std::cout << "ScavTrap " << this->_name << " has no hit points.\n";
        return ;
    }
    this->_energyPoints--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attackDmg << " points of damage!\n";
    // std::cout << "There is " << this->_energyPoints << " energy points left\n\n";
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->getName() << " deconstructor called\n";
}