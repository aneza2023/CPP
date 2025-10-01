/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:55:48 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 15:35:50 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    Zombie zombie;

    zombie.randomChump("Jarda");
    zombie.newZombie("Paja");
    zombie.announce();
    return 0;
    
}