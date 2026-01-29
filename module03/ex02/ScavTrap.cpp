/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:39:38 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/22 14:07:46 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called\n";
    this->setHitPts(100);
    this->setEnergyPts(50);
    this->setAttackDmg(20);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap has now in Gate keeping mode\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap deconstructor called\n";
}

