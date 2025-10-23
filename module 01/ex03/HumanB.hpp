/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:12 by anezka            #+#    #+#             */
/*   Updated: 2025/10/22 14:11:55 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANBs_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon      _weapon;
    public:
        HumanB();
        HumanB(std::string& name);
        HumanB(Weapon& weapon);
        HumanB(std::string& name, Weapon& weapon);
        ~HumanB();
        void attack(void) const;
};

#endif
