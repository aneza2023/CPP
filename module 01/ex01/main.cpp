/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:51:50 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/22 13:31:25 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void){
    Zombie *horde;

    horde = zombieHorde(8, "horde_1");
    for(int i = 0; i < 8; i++){
        horde[i].announce();
    }
    delete horde;
    return 0;
}