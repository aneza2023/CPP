#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
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