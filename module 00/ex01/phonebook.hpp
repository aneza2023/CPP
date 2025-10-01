/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:35:57 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 10:40:25 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

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

#endif