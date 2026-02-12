#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &orig);
        Dog &operator=(const Dog &orig);
        ~Dog();
        void makeSound() const;
} ;

#endif