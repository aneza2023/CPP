#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("undenified WrongAnimal") {
    std::cout << "Constructor for " << _type << " called\n";
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
    std::cout << "Constructor for " << _type << " called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &orig) : _type(orig._type) {
    std::cout << "Copy constructor for " << orig._type << " called\n";
}

WrongAnimal &WrongAnimal:: operator=(const WrongAnimal &orig) {
    std::cout << "Copy assignment operator for " << orig._type << " called\n";
    if (this != &orig) {
        this->_type = orig._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor for " << this->_type << " called\n";
}

std::string WrongAnimal::getType(void) const {
    return this->_type;
}

void WrongAnimal::setType(const std::string &type) {
    this->_type = type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makes random sound\n";
}