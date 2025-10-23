/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:39:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/23 14:29:27 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//implement signals?
//when in middle of add or search process input exit, should i exit?

int main(void)
{
    std::string command; 
    PhoneBook phonebook;

    std::cout << "Enter ADD, SEARCH or EXIT to use the phonebook" << std::endl;
    while (1){
        std:: cin >> command;
        if (command == "ADD"){
            Contact newContact;
            newContact = newContact.addContactData();
            phonebook.addContact(newContact);
        }
        else if (command == "SEARCH"){
            Contact searched;
            phonebook.displayContacts();
            phonebook.searchContact();
        }
        else if (command == "EXIT"){
            break ;
        }
    }
    return 0;
}
