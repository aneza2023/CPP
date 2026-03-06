#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &orig);
        WrongAnimal &operator=(const WrongAnimal &orig);
        virtual ~WrongAnimal();
        void makeSound() const;
        std::string getType(void) const;
        void setType(const std::string &type);
} ;

#endif