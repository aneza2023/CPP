/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:49:21 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 15:54:44 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void Zombie::announce(void){
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name){
    Zombie* newZombie = new Zombie;
    newZombie->name = name;
    return newZombie;
}

void Zombie::cleanZombie(Zombie* zombie){
    std::cout << zombie->name << "deleted\n";
    delete zombie;
    zombie = nullptr;
}

void Zombie::randomChump(std::string name){
    Zombie random;
    random.name = name;
    std::cout << random.name;
    announce();
}