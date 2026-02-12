#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &orig);
        Dog &operator=(const Dog &orig);
        ~Dog();
        void makeSound() const;
} ;

#endif