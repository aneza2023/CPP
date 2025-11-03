/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:08:28 by anezka            #+#    #+#             */
/*   Updated: 2025/11/03 16:12:46 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//should print just the next one or all above??
int main(int argc, char *argv[]){
    Harl person;

    if (argc != 2){
        std::cerr << "Wrong input. Add some complains Harl should have..\n";
        return 1;
    }
    std::string level = argv[1];
    person.complain(level);
    return 0;
}
