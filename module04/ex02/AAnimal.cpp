#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("undenified Aanimal") {
    std::cout << "Constructor for " << _type << " called\n";
}

AAnimal::AAnimal(const std::string &type) : _type(type) {
    std::cout << "Constructor for " << _type << " called\n";
}

AAnimal::AAnimal(const AAnimal &orig) : _type(orig._type) {
    std::cout << "Copy constructor for " << orig._type << " called\n";
}

AAnimal &AAnimal:: operator=(const AAnimal &orig) {
    std::cout << "Copy assignment operator for " << orig._type << " called\n";
    if (this != &orig) {
        this->_type = orig._type;
    }
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "Destructor for " << this->_type << " called\n";
}

std::string AAnimal::getType(void) const {
    return this->_type;
}

void AAnimal::setType(const std::string &type) {
    this->_type = type;
}
//not needed since virtual
// void AAnimal::makeSound(void) const {
//     std::cout << "AAnimal makes random sound\n";
// }