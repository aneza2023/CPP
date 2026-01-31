#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
    this->_name = "default";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;
    std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;
    std::cout << "DiamondTrap " << this->_name << " constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &orig) : ClapTrap(orig), ScavTrap(orig), FragTrap(orig) {
    *this = orig;
    std::cout << "DiamondTrap " << this->_name << " copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &orig) {
    if (this != &orig) {
        this->_name = orig._name;
        this->_hitPoints = orig._hitPoints;
        this->_energyPoints = orig._energyPoints;
        this->_attackDmg = orig._attackDmg;
        ClapTrap::_name = orig.ClapTrap::_name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " deconstructor called\n";
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << this->_name << std::endl;
    std::cout << "ClapTrap name is " << this->ClapTrap::_name << std::endl;
}