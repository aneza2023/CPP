/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:39:35 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/22 14:53:00 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

//should also orthodox canonical form? attack changes only
class ScavTrap: public ClapTrap{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};

#endif