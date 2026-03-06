#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->_type = "WrongCat";
    std::cout << "Constructor for WrongCat called\n";
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
    std::cout << "Constructor for WrongCat called\n";
}

WrongCat::WrongCat(const WrongCat &orig) : WrongAnimal(orig) {
    std::cout << "Copy constructor for WrongCat called\n";
    *this = orig;
}

WrongCat &WrongCat::operator=(const WrongCat &orig) {
    if (this != &orig)
        WrongAnimal::operator=(orig);
    return (*this);
}

void WrongCat::makeSound(void) const{
    std::cout << "Meow\n";
}

WrongCat::~WrongCat(void) {
    std::cout << "Destructor for WrongCat called\n";
}
