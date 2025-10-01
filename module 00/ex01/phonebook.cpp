/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:48:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 10:41:41 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int PhoneBook:: checkContactPresent(void)
{
    int i;
    
    for (i = 0; i < 8; i++){
        if (Contacts[i].index != 0)
            return 0;
    }
    return 1;
}

PhoneBook:: PhoneBook(void)
{
    for (int i = 0; i < 8; i++){
    Contacts[i].index = 0;
    Contacts[i].firstName = "";
    Contacts[i].lastName = "";
    Contacts[i].nickname = "";
    Contacts[i].phoneNum = "";
    Contacts[i].darkSecret = "";
    }
}

std:: string PhoneBook:: truncateforDisplay(std:: string origString)
{
    std:: string truncString;

    if (origString.length() >= 10){
        truncString = origString.substr(0, 9);
        truncString += ".";
    }
    else
        return origString;
    return truncString;
}

void PhoneBook:: displayContacts()
{
    for (int i = 0; i < 8; i++)
    {
        if (Contacts[i].index != 0){
            std:: cout.width(10); std:: cout << std:: right << Contacts[i].index << "|";
            std:: cout.width(10); std:: cout << std:: right << truncateforDisplay(Contacts[i].firstName) << "|";
            std:: cout.width(10); std:: cout << std:: right << truncateforDisplay(Contacts[i].lastName) << "|";
            std:: cout.width(10); std:: cout << std:: right << truncateforDisplay(Contacts[i].nickname) << "|";
            std:: cout << std:: endl;
        }
    }
}

void PhoneBook:: searchContact(void)
{
    int index;

    if (checkContactPresent() == 1){
        std:: cout << "No contacts present\n";
        return ;
    }
    std:: cout << "Enter index of entry for display" << std:: endl;
    while (!(std:: cin >> index) || Contacts[index -1].index == 0){
        std:: cout << "Invalid input. Input needs to be a number of index that is present in phonebook" << std:: endl;
        std:: cin.clear();
        std:: cin.ignore(10000, '\n');
    }
    index = index - 1;
    std:: cout << std:: right << Contacts[index].index << std:: endl;
    std:: cout << std:: right << Contacts[index].firstName << std:: endl;
    std:: cout << std:: right << Contacts[index].lastName << std:: endl;
    std:: cout << std:: right << Contacts[index].nickname << std:: endl;
    std:: cout << std:: right << Contacts[index].phoneNum << std:: endl;
    std:: cout << std:: right << Contacts[index].darkSecret << std:: endl;
}

void PhoneBook:: addContact(Contact newContact)
{
    static int i;

    if (i > 7)
        i = 0;
    Contacts[i] = newContact;
    Contacts[i].index = i + 1;
    i++;
}
