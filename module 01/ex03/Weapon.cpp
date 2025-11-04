/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:39 by anezka            #+#    #+#             */
/*   Updated: 2025/10/24 13:40:33 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
    this->_type = "type of weapon to be specified";
}

Weapon::Weapon(std::string type){
    if(!type.empty())
        this->_type = type;
}

Weapon::~Weapon(void){
    // std::cout << "deconstructed " << this->_type << std::endl;
}

std::string Weapon::getType(void) const{
    return this->_type;
}

void Weapon::setType(std::string type){
    if(!type.empty())
        this->_type = type;
}
