#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const std::string &type);
        AAnimal(const AAnimal &orig);
        AAnimal &operator=(const AAnimal &orig);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        std::string getType(void) const;
        void setType(const std::string &type);
} ;

#endif