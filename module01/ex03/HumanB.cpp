#include "HumanB.hpp"

HumanB::HumanB(void) {
    this->_name = "name to be specified";
    this->_weapon = NULL;
}

HumanB::HumanB(std::string name) {
    if(!name.empty())
        this->_name = name;
    this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

HumanB::~HumanB(void) {
    // std::cout << "deconstructed " << this->_name << std::endl;
}

void HumanB::attack(void) const {
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their without a weapon" << std::endl;
}

