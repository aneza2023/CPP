/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:57:15 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 15:52:56 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        void announce(void);
        Zombie* newZombie(std::string name);
        void cleanZombie(Zombie* zombie);
        void randomChump(std::string name);
};

#endif