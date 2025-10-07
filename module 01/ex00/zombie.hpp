/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:57:15 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/07 15:39:54 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif