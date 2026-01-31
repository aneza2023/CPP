#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unidentified"), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
    std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
    std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &orig) : _name(orig._name), _hitPoints(orig._hitPoints), _energyPoints(orig._energyPoints), _attackDmg(orig._attackDmg) {
    std::cout << "Copy constructor called for " << orig._name << std::endl;
}

ClapTrap &ClapTrap:: operator=(const ClapTrap &orig) {
    std::cout << "Copy assignment operator called\n";
    if (this != &orig){
        this->_name = orig._name;
        this->_hitPoints = orig._hitPoints;
        this->_energyPoints = orig._energyPoints;
        this->_attackDmg = orig._attackDmg;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Deconstructor called\n";
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        return ;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDmg << " points of damage!\n";
    // std::cout << "There is " << this->_energyPoints << " energy points left\n\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints <= 0)
        return ;
    if ((int)amount >= this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints = this->_hitPoints - amount;
    std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!\n";
    // std::cout << this->_name << " has " << this->_hitPoints << "left\n\n";
}
        
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        return ;
    this->_energyPoints--;
    this->_hitPoints = this->_hitPoints + amount;
    std::cout << "ClapTrap " << this->_name << " has repaired itself by " << amount << " points!\n";
    // std::cout << this->_name << " has " << this->_hitPoints << "letf\n\n";
}

void ClapTrap::setName(const std::string &name) {
    this->_name = name;
}

std::string ClapTrap::getName(void) const {
    return this->_name;
}

int ClapTrap::getEnergyPts(void) const {
    return this->_energyPoints;
}

int ClapTrap::getHitPoints(void) const {
    return this->_hitPoints;
}