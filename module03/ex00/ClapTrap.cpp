/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:26:30 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/11 16:07:25 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
    std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &orig) : _name(orig._name), _hitPoints(orig._hitPoints), _energyPoints(orig._energyPoints), _attackDmg(orig._attackDmg)
{
    std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap:: operator=(const ClapTrap &orig)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &orig){
        this->_name = orig._name;
        this->_hitPoints = orig._hitPoints;
        this->_energyPoints = orig._energyPoints;
        this->_attackDmg = orig._attackDmg;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor called\n";
}

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{
    
}
        
void ClapTrap::beRepaired(unsigned int amount)
{

}