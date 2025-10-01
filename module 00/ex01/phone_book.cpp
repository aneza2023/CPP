/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:48:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 09:22:08 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main(void)
{
    std:: string command; 
    PhoneBook phonebook;

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