#include "Weapon.hpp"

Weapon::Weapon(void) {
    this->_type = "type of weapon to be specified";
}

Weapon::Weapon(std::string type) {
    if(!type.empty())
        this->_type = type;
}

Weapon::~Weapon(void) {
    // std::cout << "deconstructed " << this->_type << std::endl;
}

const std::string& Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(std::string type) {
    if(!type.empty())
        this->_type = type;
}
