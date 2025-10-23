/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:35:57 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/23 14:13:31 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook{
    private:
        Contact _Contacts[8];

        int checkContactPresent();
        std::string truncateforDisplay(std::string origString);

    public:
        PhoneBook();
        void addContact(Contact newContact);
        void displayContacts();
        void searchContact();
};

#endif