/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:49:21 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/07 15:49:09 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(void) : _name(""){}

Zombie::~Zombie(void){
    std::cout << this->_name << "is being destroyed" << std:: endl;
}

void Zombie::announce(void) const{
    if (!this->_name.empty())
        std::cout << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const{
    return this->_name;
}

void Zombie::setName(std::string& name){
    if (!name.empty()){
        this->_name = name;
    }
}