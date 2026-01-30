#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP    

#include <iostream>
#include <string>

class ClapTrap {
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDmg;
    public:
        ClapTrap();
        ClapTrap(std::string &name);
        ClapTrap(const ClapTrap &orig);
        ClapTrap &operator=(const ClapTrap &orig);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void);
        int getHitPoints(void);
        int getEnergyPts(void);
        void setName(std::string &name);
        void setEnergyPts(int nb);
        void setHitPts(int nb);
        void setAttackDmg(int nb);
};

#endif