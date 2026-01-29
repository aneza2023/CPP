/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:09:24 by anezka            #+#    #+#             */
/*   Updated: 2025/11/03 16:11:51 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level){
    std::string defLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && level.compare(defLevel[i]) != 0)
        i++;
    switch (i) 
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
            std::cout << std::endl;
            /* fallthrough */ 
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            this->info();
            std::cout << std::endl;
            /* fallthrough */
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            std::cout << std::endl;
            /* fallthrough */
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
