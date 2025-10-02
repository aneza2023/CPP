/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:35:57 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/02 14:11:05 by ahavrank         ###   ########.fr       */
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

        int checkContactPresent();
        std::string truncateforDisplay(std::string origString);

    public:
        PhoneBook();
        void addContact(Contact newContact);
        void displayContacts();
        void searchContact();
};

#endif