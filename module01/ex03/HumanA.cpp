#include "HumanA.hpp"

HumanA::HumanA(Weapon& weapon) : _weapon(weapon) {
    this->_name = "name not yet known";
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
    if(!name.empty())
        this->_name = name;   
}

HumanA::~HumanA(void) {
    // std::cout << "deconstructed " << this->_name << std::endl;
}

void HumanA::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
