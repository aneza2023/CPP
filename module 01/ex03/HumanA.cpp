/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:17 by anezka            #+#    #+#             */
/*   Updated: 2025/10/24 14:54:26 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon& weapon) : _weapon(weapon){
    this->_name = "name not yet known";
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon){
    if(!name.empty())
        this->_name = name;   
}

HumanA::~HumanA(void){
    // std::cout << "deconstructed " << this->_name << std::endl;
}

void HumanA::attack(void) const{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

