/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:34:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 10:39:43 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std:: string Contact:: checkInputPresent(std:: string input)
{
    while (input.empty()){
        std:: cout << "Invalid input. Can't be left blank\n";
        std:: cin >> input;
    }
    return input;   
}

Contact Contact:: addContactData(void)
{
    Contact a;

    std:: cout << "Input contact name information:" << std:: endl;
    std:: cout << "First name:" << std:: endl;
    std:: cin >> a.firstName;
    std:: cout << "Last name:" << std:: endl;
    std:: cin >> a.lastName;
    std:: cout << "Nickname:" << std:: endl;
    std:: cin >> a.nickname;
    std:: cout << "Phone number:" << std:: endl;
    std:: cin >> a.phoneNum;
    std:: cout << "Darkest secret" << std:: endl;
    std:: cin >> a.darkSecret;
    return (a);
}
