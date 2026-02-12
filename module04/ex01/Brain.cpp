#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const std::string &idea) {
    std::cout << "Brain constructor called\n";
    for (int k = 0; k < 100; k++) {
        this->ideas[k] = idea;
    }
}

Brain::Brain(const Brain &orig) {
    std::cout << "Copy constructor for Brain called\n";
    *this = orig;
}

Brain &Brain::operator=(const Brain &orig) {
    std::cout << "Copy assignment operator for Brain called\n";
    if (this != &orig) {
        for (int k = 0; k < 100; k++) {
            this->ideas[k] = orig.ideas[k];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Destructor for Brain called\n";
}