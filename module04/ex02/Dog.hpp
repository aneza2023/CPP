#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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