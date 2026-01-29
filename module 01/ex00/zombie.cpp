/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:49:21 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/22 13:30:54 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(void) : _name(""){}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void){
    std::cout << this->_name << " is being destroyed" << std:: endl;
}

void Zombie::announce(void) const{
    if (!this->_name.empty())
        std::cout << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const{
    return this->_name;
}

void Zombie::setName(const std::string& name){
    if (!name.empty()){
        this->_name = name;
    }
}