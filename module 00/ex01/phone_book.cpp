/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:48:16 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/09/30 15:13:20 by anezkahavra      ###   ########.fr       */
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
            Contact new_cont;
            new_cont = new_cont.add_ContactData();
            phonebook.add_Contact(new_cont);
        }
        else if (command == "SEARCH"){
            Contact searched;
            phonebook.display_Contacts();
            phonebook.search_Contact();
        }
        else if (command == "EXIT"){
            break ;
        }
    }
    return 0;
}