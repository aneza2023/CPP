/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:34:58 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/10 13:58:45 by anezkahavra      ###   ########.fr       */
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

    std::cout << "First name: "; 
    std::cin.ignore();
    std::getline(std::cin, a._firstName);
    if (std::cin.eof())
        exit(EOF);
    while (a._firstName.empty()){
        std::cout << "\nContact information needs to be filed.\n" << "First name: ";
        std::getline(std::cin, a._firstName);
    }
    std::cout << "Last name: ";
    std::getline(std::cin, a._lastName);
    if (std::cin.eof())
        exit(EOF);
    while (a._lastName.empty()){
        std::cout << "\nContact information needs to be filed.\n" << "Last name: ";
        std::getline(std::cin, a._lastName);
    }
    std::cout << "Nickname: ";
    std::getline(std::cin, a._nickname);
    if (std::cin.eof())
        exit(EOF);
    while (a._nickname.empty()){
        std::cout << "\nContact information needs to be filed.\n" << "Nickname: ";
        std::getline(std::cin, a._nickname);
    }
    std::cout << "Phone number: ";
    std::getline(std::cin, a._phoneNum);
    if (std::cin.eof())
        exit(EOF);
    while (a._phoneNum.empty()){
        std::cout << "\nContact information needs to be filed.\n" << "Phone number: ";
        std::getline(std::cin, a._phoneNum);
    }
    std::cout << "Darkest secret: ";
    std::getline(std::cin, a._darkSecret);
    if (std::cin.eof())
        exit(EOF);
    while (a._darkSecret.empty()){
        std::cout << "\nContact information needs to be filed.\n" << "Darkest secret: ";
        std::getline(std::cin, a._darkSecret);
    }
    std::cout << "\nAdding contact complete.\n\n";
    return (a);
}
