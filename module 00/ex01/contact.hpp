/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 14:43:06 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNum;
        std::string darkSecret;
    public:
        int index;

    public:
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickame(void);
        std::string getPhoneNum(void);
        std::string getDarkSecret(void);
        void setFirstName(void);
        void setLastName(void);
        void setNickname(void);
        void setPhoneNum(void);
        void setDarkSecret(void);
        void setFirstName(std::string& value);
        void setLastName(std::string& value);
        void setNickname(std::string& value);
        void setPhoneNum(std::string& value);
        void setDarkSecret(std::string& value);
        Contact addContactData(void); 
        std::string checkInputPresent(std::string input);
};

#endif