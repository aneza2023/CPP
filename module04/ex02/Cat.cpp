#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Constructor for Cat called\n";
}

Cat::Cat(const std::string &type) : Animal(type) {
    this->_brain = new Brain();
    std::cout << "Constructor for Cat called\n";
}

Cat::Cat(const Cat &orig) : Animal(orig) {
    std::cout << "Copy constructor for Cat called\n";
    this->_brain = NULL;
    *this = orig;
}

Cat &Cat::operator=(const Cat &orig) {
    if (this != &orig) {
        this->_type = orig._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*orig._brain);
    }
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Meow\n";
}

Cat::~Cat(void) {
    std::cout << "Destructor for Cat called\n";
    delete _brain;
}
