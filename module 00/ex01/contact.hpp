/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:30:51 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 10:39:45 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    public:
        int index;
        std:: string firstName;
        std:: string lastName;
        std:: string nickname;
        std:: string phoneNum;
        std:: string darkSecret;

        Contact addContactData(); 
        std:: string checkInputPresent(std:: string input);
};

#endif