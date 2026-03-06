#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>   

class AMateria {
    protected:
        
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &orig);
        AMateria &operator=(const AMateria &orig);
        virtual ~AMateria();

        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
