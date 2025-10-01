/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 10:00:07 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact{
    public:
        int index;
        std:: string firstName;
        std:: string lastName;
        std:: string nickname;
        std:: string phoneNum;
        std:: string darkSecret;
        Contact addContactData(); 
        std:: string checkInputPresent(std:: string input);
};

class PhoneBook{
    public:
        Contact Contacts[8];
        PhoneBook();
        void addContact(Contact newContact);
        void displayContacts();
        int checkContactPresent();
        std:: string truncateforDisplay(std:: string origString);
        void searchContact();
};

 std:: string Contact:: checkInputPresent(std:: string input)
 {
    while (input.empty()){
        std:: cout << "Invalid input. Can't be left blank\n";
        std:: cin >> input;
    }
    return input;   
 }

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
        std:: cout << "Invalid input. Input need to be number of index that is present" << std:: endl;
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