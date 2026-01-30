#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

//cannot use reference if i dont have value immediately and want add it later on
//using pointer
class HumanB {
    private:
        std::string _name;
        Weapon*     _weapon;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void attack(void) const;
        void setWeapon(Weapon& weapon);
};

#endif
