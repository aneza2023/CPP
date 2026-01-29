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

#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* zombieHorde1 = new Zombie[N];
    for(int i = 0; i < N; i++){
        zombieHorde1[i].setName(name);
    }
    return zombieHorde1;
}