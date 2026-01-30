#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

//should be also orthodox canonical form or if derivate not needed
//attack changes only??

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &orig);
	    ScavTrap &operator=(const ScavTrap &orig);
        ~ScavTrap();
        void guardGate();
};

#endif