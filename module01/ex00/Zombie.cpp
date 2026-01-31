#include "Zombie.hpp"

Zombie::Zombie(void) : _name("") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
    std::cout << this->_name << " is being destroyed" << std:: endl;
}

void Zombie::announce(void) const {
    if (!this->_name.empty())
        std::cout << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const {
    return this->_name;
}

void Zombie::setName(const std::string& name) {
    if (!name.empty()){
        this->_name = name;
    }
}