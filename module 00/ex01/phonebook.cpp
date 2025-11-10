/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:48:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/10 14:07:11 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int PhoneBook::checkContactPresent(void)
{
    int i;
    
    for (i = 0; i < 8; i++){
        if (_Contacts[i].getIndex() != 0)
            return 0;
    }
    return 1;
}

PhoneBook::PhoneBook(void)
{
    for (int i = 0; i < 8; i++){
        _Contacts[i].setIndex();
        _Contacts[i].setFirstName();
        _Contacts[i].setLastName();
        _Contacts[i].setNickname();
        _Contacts[i].setPhoneNum();
        _Contacts[i].setDarkSecret();
    }
}

std::string PhoneBook::truncateforDisplay(std::string origString)
{
    std::string truncString;

    if (origString.length() >= 10){
        truncString = origString.substr(0, 9);
        truncString += ".";
    }
    else
        return origString;
    return truncString;
}

void PhoneBook::displayContacts()
{
    for (int i = 0; i < 8; i++)
    {
        if (_Contacts[i].getIndex() != 0){
            std::cout.width(10); std::cout << std::right << _Contacts[i].getIndex() << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(_Contacts[i].getFirstName()) << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(_Contacts[i].getLastName()) << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(_Contacts[i].getNickame()) << "|";
            std::cout << std::endl;
        }
    }
}

void PhoneBook::searchContact(void)
{
    int index;

    if (checkContactPresent() == 1){
        std::cout << "There are no saved contacts. Use ADD to save a new contact.\n\n";
        return ;
    }
    std::cout << "\nEnter the index of the contact to display:\n" << std::endl;
    while (!(std::cin >> index) || _Contacts[index -1].getIndex() == 0){
        if (std::cin.eof())
            exit(EOF);
        std::cout << "\nInvalid input. The index must match an existing contact.\n" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    index = index - 1;
    std::cout << "\nContact information:\n\n";
    std::cout << std::right << _Contacts[index].getIndex() << std::endl;
    std::cout << std::right << _Contacts[index].getFirstName() << std::endl;
    std::cout << std::right << _Contacts[index].getLastName() << std::endl;
    std::cout << std::right << _Contacts[index].getNickame() << std::endl;
    std::cout << std::right << _Contacts[index].getPhoneNum() << std::endl;
    std::cout << std::right << _Contacts[index].getDarkSecret() << std::endl;
    std::cout << "\nDisplaying contact complete.\n";
}

void PhoneBook::addContact(Contact newContact)
{
    static int i;
    int index_nb;

    if (i > 7)
        i = 0;
    _Contacts[i] = newContact;
    index_nb = i + 1;
    _Contacts[i].setIndex(index_nb);
    i++;
}
