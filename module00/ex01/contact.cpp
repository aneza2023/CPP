#include "contact.hpp"

void Contact::setFirstName() {
        _firstName = "";
}
void Contact::setFirstName(const std::string& value){
    if (!value.empty()){
        _firstName = value;
    }
}

void Contact::setLastName(void) {
        _lastName = "";
}

void Contact::setLastName(const std::string& value) {
    if (!value.empty()){
        _lastName = value;
    }
}

void Contact::setNickname(void) {
    _nickname = "";
}

void Contact::setNickname(const std::string& value) {
    if (!value.empty()){
      _nickname = value;
    }
}

void Contact::setPhoneNum(void) {
       _phoneNum = "";
}

void Contact::setPhoneNum(const std::string& value) {
    if (!value.empty()){
       _phoneNum = value;
    }
}

void Contact::setDarkSecret(void) {
        _darkSecret = "";
}

void Contact::setDarkSecret(const std::string& value) {
    if (!value.empty()){
        _darkSecret = value;
    }
}

void Contact::setIndex(void) {
    _index = 0;
}

void Contact::setIndex(const int& value) {
    _index = value;
}

std::string Contact::getFirstName(void) {
    return _firstName;
}

std::string Contact::getLastName(void) {
    return _lastName;
}

std::string Contact::getNickame(void) {
    return _nickname;
}

std::string Contact::getPhoneNum(void) {
    return _phoneNum;
}

std::string Contact::getDarkSecret(void) {
    return _darkSecret;
}

int Contact::getIndex(void) {
    return _index;
}

std:: string Contact:: checkInput(std:: string prompt) {
    std::string input;
    while(true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            std::cout << "\n\nEOF detected. Exiting the phonebook now.\n";
            exit(0);
        }
        if(!input.empty())
            break;
        std::cout << "\nField cannot be left empty.\n";
    }
    return (input);
}

Contact Contact:: addContactData(void) {
    Contact a;
    std::string temp;

    temp = checkInput("First Name: ");
    a.setFirstName(temp);
    temp = checkInput("Last Name: ");
    a.setLastName(temp);
    temp = checkInput("Nickname: ");
    a.setNickname(temp);
    temp = checkInput("Phone Number: ");
    a.setPhoneNum(temp);
    temp = checkInput("Darkest Secret: ");
    a.setDarkSecret(temp);
    std::cout << "\nAdding contact complete.\n" << std::endl;
    return (a);
}