/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:35:57 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 13:34:18 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook{
    private:
        Contact Contacts[8];

    public:
        PhoneBook();
        void addContact(Contact newContact);
        void displayContacts();
        int checkContactPresent();
        std::string truncateforDisplay(std::string origString);
        void searchContact();
};

#endif