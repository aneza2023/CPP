#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &orig);
        Animal &operator=(const Animal &orig);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType(void) const;
        void setType(const std::string &type);
} ;

//constr, destr own message
#endif