/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:17 by anezka            #+#    #+#             */
/*   Updated: 2025/10/22 14:09:58 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void){
    this->_name = "name to be specified";
}

HumanA::HumanA(std::string& name){
    if(!name.empty())
        this->_name = name;
}

HumanA::HumanA(Weapon& weapon){
    this->_name = "name to be specified";
    this->_weapon = weapon;
}

HumanA::HumanA(std::string& name, Weapon& weapon){
    if(!name.empty())
        this->_name = name;
    this->_weapon = weapon;    
}

HumanA::~HumanA(void){
    std::cout << "deconstructed " << this->_name << std::endl;
}

void HumanA::attack(void) const{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}

