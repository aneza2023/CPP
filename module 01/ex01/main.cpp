/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:51:50 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/07 16:34:18 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void){
    Zombie *horde;

    horde = zombieHorde(8, "horde_1");
    for(int i=0; i < 8, i++){
        horde->announce();
    }
    return 0;
}