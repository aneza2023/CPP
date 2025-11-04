/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:51:21 by anezka            #+#    #+#             */
/*   Updated: 2025/10/24 14:45:47 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

//can use reference, since weapon allways needed, must exist before
class HumanA{
    private:
        std::string _name;
        Weapon&      _weapon;
    public:
        HumanA(Weapon& weapon);
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack(void) const;
};

#endif
