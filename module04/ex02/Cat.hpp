#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &orig);
        Cat &operator=(const Cat &orig);
        ~Cat();
        void makeSound() const;
} ;

#endif