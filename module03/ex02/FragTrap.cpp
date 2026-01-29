/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:53:23 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/22 14:57:26 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called\n";
    this->setHitPts(100);
    this->setEnergyPts(100);
    this->setAttackDmg(30);
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap requests high five\n";
}