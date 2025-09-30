/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:55:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/09/30 11:31:42 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class StringClass{
    public:
        std:: string orig_string;
        void setData(char* &argument);
        void megaphone(std:: string argument);
};

void StringClass:: setData(char* &argument){
    std:: string str_argument(argument);
    orig_string = str_argument;
}

void StringClass::megaphone(std::string argument){
    
    for (int i = 0; i < argument.length(); i++)
    {
        if (argument[i] >= 97 && argument[i] <= 122)
            argument[i] -= 32;
    }
    std:: cout << argument << std:: endl;
}

int main(int argc, char *argv[])
{
    int i;

    if (argc == 1)
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    for (i = 1; i < argc; i++){
        StringClass *a = new StringClass;
        a->setData(argv[i]);
        a->megaphone(a->orig_string);
        delete a;
    }
    return 0;
}