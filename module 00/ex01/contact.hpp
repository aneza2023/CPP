/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/23 14:13:23 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNum;
        std::string _darkSecret;
        int _index;

        std::string checkInputPresent(std::string input);

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
        void setFirstName(std::string& value);
        void setLastName(std::string& value);
        void setNickname(std::string& value);
        void setPhoneNum(std::string& value);
        void setDarkSecret(std::string& value);
        void setIndex(int &value);
        Contact addContactData(void); 
};

#endif