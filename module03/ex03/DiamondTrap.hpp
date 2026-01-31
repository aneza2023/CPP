#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &orig);
        DiamondTrap &operator=(const DiamondTrap &orig);
        ~DiamondTrap();
        using ScavTrap::attack;
        void whoAmI();
};

#endif