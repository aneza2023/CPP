/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:34:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/22 13:31:17 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* horde = new Zombie[N];
    for(int i = 0; i < N; i++){
        horde[i].setName(name);
    }
    return horde;
}