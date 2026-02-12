#include "Animal.hpp"

Animal::Animal() : _type("undenified animal") {
    std::cout << "Constructor for " << _type << " called\n";
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Constructor for " << _type << " called\n";
}

Animal::Animal(const Animal &orig) : _type(orig._type) {
    std::cout << "Copy constructor for " << orig._type << " called\n";
}

Animal &Animal:: operator=(const Animal &orig) {
    std::cout << "Copy assignment operator for " << orig._type << " called\n";
    if (this != &orig) {
        this->_type = orig._type;
    }
    return (*this);
}

Animal::~Animal() {
    std::cout << "Destructor for " << this->_type << " called\n";
}

std::string Animal::getType(void) const {
    return this->_type;
}

void Animal::setType(const std::string &type) {
    this->_type = type;
}

void Animal::makeSound(void) const {
    std::cout << "Animal makes random sound\n";
}