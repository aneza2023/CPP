#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Constructor for Cat called\n";
}

Cat::Cat(const std::string &type) : Animal(type) {
    std::cout << "Constructor for Cat called\n";
}

Cat::Cat(const Cat &orig) : Animal(orig) {
    std::cout << "Copy constructor for Cat called\n";
    *this = orig;
}

Cat &Cat::operator=(const Cat &orig) {
    if (this != &orig)
        Animal::operator=(orig);
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Meow\n";
}

Cat::~Cat(void) {
    std::cout << "Destructor for Cat called\n";
}
