#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <csignal>

class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNum;
        std::string _darkSecret;
        int _index;

        std::string checkInput(std::string prompt);

    public:
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickame(void);
        std::string getPhoneNum(void);
        std::string getDarkSecret(void);
        int getIndex(void);
        void setFirstName(void);
        void setLastName(void);
        void setNickname(void);
        void setPhoneNum(void);
        void setDarkSecret(void);
        void setIndex(void);
        void setFirstName(const std::string& value);
        void setLastName(const std::string& value);
        void setNickname(const std::string& value);
        void setPhoneNum(const std::string& value);
        void setDarkSecret(const std::string& value);
        void setIndex(const int &value);
        Contact addContactData(void);
};

#endif