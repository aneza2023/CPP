/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:34:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 14:46:23 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(){
        firstName = "";
}
void Contact::setFirstName(std::string& value){
    if (!value.empty()){
        firstName = value;
    }
}

void Contact::setLastName(void){
        lastName = "";
}

void Contact::setLastName(std::string& value){
    if (!value.empty()){
        lastName = value;
    }
}

void Contact::setNickname(void){
      nickname = "";
}

void Contact::setNickname(std::string& value){
    if (!value.empty()){
      nickname = value;
    }
}

void Contact::setPhoneNum(void){
       phoneNum = "";
}

void Contact::setPhoneNum(std::string& value){
    if (!value.empty()){
       phoneNum = value;
    }
}

void Contact::setDarkSecret(void){
        darkSecret = "";
}

void Contact::setDarkSecret(std::string& value){
    if (!value.empty()){
        darkSecret = value;
    }
}

std::string Contact::getFirstName(void){
    return firstName;
}

std::string Contact::getLastName(void){
    return lastName;
}

std::string Contact::getNickame(void){
    return nickname;
}

std::string Contact::getPhoneNum(void){
    return phoneNum;
}

std::string Contact::getDarkSecret(void){
    return darkSecret;
}

std:: string Contact:: checkInputPresent(std:: string input)
{
    while (input.empty()){
        std::cout << "Invalid input. Can't be left blank\n";
        std::cin >> input;
    }
    return input;   
}

Contact Contact:: addContactData(void)
{
    Contact a;

    std::cout << "Provide contact details:" << std:: endl;
    std::cout << "First name:" << std:: endl;
    std::cin >> a.firstName;
    std::cout << "Last name:" << std:: endl;
    std::cin >> a.lastName;
    std::cout << "Nickname:" << std:: endl;
    std::cin >> a.nickname;
    std::cout << "Phone number:" << std:: endl;
    std::cin >> a.phoneNum;
    std::cout << "Darkest secret" << std:: endl;
    std:: cin >> a.darkSecret;
    return (a);
}
