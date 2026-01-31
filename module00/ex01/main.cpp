#include "phonebook.hpp"

int main(void) {
    std::string command; 
    PhoneBook phonebook;

    std::cout << std::endl;
    std::cout << "Enter ADD, SEARCH or EXIT to use the phonebook:\n" << std::endl;
    while (1){
        signal(SIGQUIT, SIG_IGN);
        // std:: cin >> command;
        if(!std::getline(std::cin, command))
            break;
        if (std::cin.eof())
            break;
        if (command == "ADD"){
            std::cout << std::endl;
            Contact newContact;
            newContact = newContact.addContactData();
            phonebook.addContact(newContact);
        }
        else if (command == "SEARCH"){
            std::cout << std::endl;
            Contact searched;
            phonebook.displayContacts();
            phonebook.searchContact();
        }
        else if (command == "EXIT"){
            break ;
        }
        else{
            std::cout << "\nCommand not found.\n" << "Enter ADD, SEARCH or EXIT to use the phonebook:\n\n";
        }
    }
    return 0;
}
