/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:51:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/07 16:36:06 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>


//linked list
class Zombie{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void announce(void) const;
        std::string getName(void) const;
        void setName(std::string& name);
};

Zombie* zombieHorde(int N, std::string name);

#endif