/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:48:40 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/22 15:01:14 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP    

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFiveGuys(void);
};

#endif