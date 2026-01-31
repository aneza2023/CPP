#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

//can use reference, since weapon allways needed, must exist before
class HumanA {
    private:
        std::string _name;
        Weapon&      _weapon;
    public:
        HumanA(Weapon& weapon);
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack(void) const;
};

#endif
