/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:25 by anezka            #+#    #+#             */
/*   Updated: 2025/10/24 14:54:13 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){
    this->_name = "name to be specified";
    this->_weapon = nullptr;
}

HumanB::HumanB(std::string name){
    if(!name.empty())
        this->_name = name;
    this->_weapon = nullptr;
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}

HumanB::~HumanB(void){
    // std::cout << "deconstructed " << this->_name << std::endl;
}

void HumanB::attack(void) const{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

