/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/02 14:11:01 by ahavrank         ###   ########.fr       */
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
        int index;

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