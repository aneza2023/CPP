#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

//should also orthodox canonical form? attack changes only
class ScavTrap: public ClapTrap {
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};

#endif