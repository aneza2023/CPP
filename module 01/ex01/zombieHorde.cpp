/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:34:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/07 16:34:28 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie** zombieHorde = new Zombie*[N];
    for(int i = 0; i < N; i++){
        zombieHorde[i]->setName(name);
    }
    return zombieHorde[0];
}