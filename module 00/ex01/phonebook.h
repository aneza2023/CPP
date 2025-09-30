/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/09/30 16:02:22 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact{
    public:
        int index;
        std:: string first_name;
        std:: string last_name;
        std:: string nickname;
        std:: string phone_nb;
        std:: string dark_secret;
        Contact add_ContactData();
        std:: string check_InputPresent(std:: string input);
};

class PhoneBook{
    public:
        Contact Contacts[8];
        PhoneBook();
        void add_Contact(Contact new_cont);
        void display_Contacts();
        int check_ContactPresent();
        std:: string truncate_forDisplay(std:: string orig_string);
        void search_Contact();
};

 std:: string Contact:: check_InputPresent(std:: string input)
 {
    while (input.empty()){
        std:: cout << "Invalid input. Can't be left blank\n";
        std:: cin >> input;
    }
    return input;   
 }

int PhoneBook:: check_ContactPresent(void)
{
    int i;
    
    for (i = 0; i < 8; i++){
        if (Contacts[i].index != 0)
            break;
    }
    if (i < 7)
        return 0;
    return 1;
}

PhoneBook:: PhoneBook(void)
{
    for (int i = 0; i < 9; i++){
    Contacts[i].index = 0;
    Contacts[i].first_name = "";
    Contacts[i].last_name = "";
    Contacts[i].nickname = "";
    Contacts[i].phone_nb = "";
    Contacts[i].dark_secret = "";
    }
}

std:: string PhoneBook:: truncate_forDisplay(std:: string orig_string)
{
    std:: string trunc_string;

    if (orig_string.length() >= 10){
        trunc_string = orig_string.substr(0, 9);
        trunc_string += ".";
    }
    else
        return orig_string;
    return trunc_string;
}

void PhoneBook:: display_Contacts()
{
    for (int i = 0; i < 8; i++)
    {
        if (Contacts[i].index != 0){
            std:: cout.width(10); std:: cout << std:: right << Contacts[i].index << "|";
            std:: cout.width(10); std:: cout << std:: right << truncate_forDisplay(Contacts[i].first_name) << "|";
            std:: cout.width(10); std:: cout << std:: right << truncate_forDisplay(Contacts[i].last_name) << "|";
            std:: cout.width(10); std:: cout << std:: right << truncate_forDisplay(Contacts[i].nickname) << "|";
            std:: cout << std:: endl;
        }
    }
}

void PhoneBook:: search_Contact(void)
{
    int index;

    if (check_ContactPresent() == 1){
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
    std:: cout << std:: right << Contacts[index].first_name << std:: endl;
    std:: cout << std:: right << Contacts[index].last_name << std:: endl;
    std:: cout << std:: right << Contacts[index].nickname << std:: endl;
    std:: cout << std:: right << Contacts[index].phone_nb << std:: endl;
    std:: cout << std:: right << Contacts[index].dark_secret << std:: endl;
}

void PhoneBook:: add_Contact(Contact new_cont)
{
    static int i;

    if (i > 7)
        i = 0;
    Contacts[i] = new_cont;
    Contacts[i].index = i + 1;
    i++;
}

Contact Contact:: add_ContactData(void)
{
    Contact a;

    std:: cout << "Input contact name information:" << std:: endl;
    std:: cout << "First name:" << std:: endl;
    while (a.first_name.empty()){
        std:: cin >> a.first_name;
    }
    std:: cout << "Last name:" << std:: endl;
    std:: cin >> a.last_name;
    std:: cout << "Nickname:" << std:: endl;
    std:: cin >> a.nickname;
    std:: cout << "Phone number:" << std:: endl;
    std:: cin >> a.phone_nb;
    std:: cout << "Darkest secret" << std:: endl;
    std:: cin >> a.dark_secret;
    return (a);
}