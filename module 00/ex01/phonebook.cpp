/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:48:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/02 14:20:43 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int PhoneBook::checkContactPresent(void)
{
    int i;
    
    for (i = 0; i < 8; i++){
        if (Contacts[i].getIndex() != 0)
            return 0;
    }
    return 1;
}

PhoneBook::PhoneBook(void)
{
    for (int i = 0; i < 8; i++){
    Contacts[i].setIndex();
    Contacts[i].setFirstName();
    Contacts[i].setLastName();
    Contacts[i].setNickname();
    Contacts[i].setPhoneNum();
    Contacts[i].setDarkSecret();
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
        if (Contacts[i].getIndex() != 0){
            std::cout.width(10); std::cout << std::right << Contacts[i].getIndex() << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(Contacts[i].getFirstName()) << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(Contacts[i].getLastName()) << "|";
            std::cout.width(10); std::cout << std::right << truncateforDisplay(Contacts[i].getNickame()) << "|";
            std::cout << std::endl;
        }
    }
}

void PhoneBook::searchContact(void)
{
    int index;

    if (checkContactPresent() == 1){
        std::cout << "There are no saved contacts\n";
        return ;
    }
    std::cout << "Enter the index of the contact to display" << std::endl;
    while (!(std::cin >> index) || Contacts[index -1].getIndex() == 0){
        std::cout << "Invalid input. The index must match an existing contact." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    index = index - 1;
    std::cout << std::right << Contacts[index].getIndex() << std::endl;
    std::cout << std::right << Contacts[index].getFirstName() << std::endl;
    std::cout << std::right << Contacts[index].getLastName() << std::endl;
    std::cout << std::right << Contacts[index].getNickame() << std::endl;
    std::cout << std::right << Contacts[index].getPhoneNum() << std::endl;
    std::cout << std::right << Contacts[index].getDarkSecret() << std::endl;
}

void PhoneBook::addContact(Contact newContact)
{
    static int i;
    int index_nb;

    if (i > 7)
        i = 0;
    Contacts[i] = newContact;
    index_nb = i + 1;
    Contacts[i].setIndex(index_nb);
    i++;
}
