/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:51:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/22 13:31:15 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

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

Zombie* zombieHorde(int N, std::string name);

#endif