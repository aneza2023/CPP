/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:34:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/23 14:13:20 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(){
        _firstName = "";
}
void Contact::setFirstName(std::string& value){
    if (!value.empty()){
        _firstName = value;
    }
}

void Contact::setLastName(void){
        _lastName = "";
}

void Contact::setLastName(std::string& value){
    if (!value.empty()){
        _lastName = value;
    }
}

void Contact::setNickname(void){
    _nickname = "";
}

void Contact::setNickname(std::string& value){
    if (!value.empty()){
      _nickname = value;
    }
}

void Contact::setPhoneNum(void){
       _phoneNum = "";
}

void Contact::setPhoneNum(std::string& value){
    if (!value.empty()){
       _phoneNum = value;
    }
}

void Contact::setDarkSecret(void){
        _darkSecret = "";
}

void Contact::setDarkSecret(std::string& value){
    if (!value.empty()){
        _darkSecret = value;
    }
}

void Contact::setIndex(void){
    _index = 0;
}

void Contact::setIndex(int& value){
    _index = value;
}

std::string Contact::getFirstName(void){
    return _firstName;
}

std::string Contact::getLastName(void){
    return _lastName;
}

std::string Contact::getNickame(void){
    return _nickname;
}

std::string Contact::getPhoneNum(void){
    return _phoneNum;
}

std::string Contact::getDarkSecret(void){
    return _darkSecret;
}

int:: Contact::getIndex(void){
    return _index;
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
    std::cin >> a._firstName;
    std::cout << "Last name:" << std:: endl;
    std::cin >> a._lastName;
    std::cout << "Nickname:" << std:: endl;
    std::cin >> a._nickname;
    std::cout << "Phone number:" << std:: endl;
    std::cin >> a._phoneNum;
    std::cout << "Darkest secret" << std:: endl;
    std:: cin >> a._darkSecret;
    std::cout << "Adding contact complete.\n";
    return (a);
}
