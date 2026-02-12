#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << "Constructor for Dog called\n";
}

Dog::Dog(const std::string &type) : Animal(type) {
    std::cout << "Constructor for Dog called\n";
}

Dog::Dog(const Dog &orig) : Animal(orig) {
    std::cout << "Copy constructor for Dog called\n";
    *this = orig;
}

Dog &Dog::operator=(const Dog &orig) {
    if (this != &orig)
        Animal::operator=(orig);
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "Haf\n";
}

Dog::~Dog(void) {
    std::cout << "Destructor for Dog called\n";
}
