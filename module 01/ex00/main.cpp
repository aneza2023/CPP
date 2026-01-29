/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:55:48 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/22 13:30:46 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* Zombie1 = newZombie("Jana");
    Zombie1->announce();
    delete Zombie1;

    randomChump("Ludva");
    return 0;
}