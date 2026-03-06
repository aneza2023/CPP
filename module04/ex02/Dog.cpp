#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Constructor for Dog called\n";
}

Dog::Dog(const std::string &type) : Animal(type) {
    this->_brain = new Brain();
    std::cout << "Constructor for Dog called\n";
}

Dog::Dog(const Dog &orig) : Animal(orig) {
    std::cout << "Copy constructor for Dog called\n";
    this->_brain = NULL;
    *this = orig;
}

Dog &Dog::operator=(const Dog &orig) {
    if (this != &orig) {
        this->_type = orig._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*orig._brain);
    }
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "Haf\n";
}

Dog::~Dog(void) {
    std::cout << "Destructor for Dog called\n";
    delete _brain;
}
