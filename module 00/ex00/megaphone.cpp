/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:55:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/10/01 09:49:53 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    if (argc == 1)
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    for (int index = 1; index < argc; index++){
        std:: string origString(argv[index]);
        for (int i = 0; i < origString.length(); i++){
            std:: cout << (char)toupper(origString[i]);
        }
        if (index + 1 != argc)
        std:: cout << " ";
    }
    return 0;
}


// class StringClass{
//     public:
//         std:: string origString;
//         void setData(char* &argument);
//         void megaphone(std:: string argument);
// };

// void StringClass:: setData(char* &argument){
//     std:: string str_argument(argument);
//     origString = str_argument;
// }

// void StringClass::megaphone(std::string argument){
    
//     for (int i = 0; i < argument.length(); i++)
//     {
//         if (argument[i] >= 97 && argument[i] <= 122)
//             argument[i] -= 32;
//     }
//     std:: cout << argument << std:: endl;
// }

// int main(int argc, char *argv[])
// {
//     int i;

//     if (argc == 1)
//         std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
//     for (i = 1; i < argc; i++){
//         StringClass *a = new StringClass;
//         a->setData(argv[i]);
//         a->megaphone(a->origString);
//         delete a;
//     }
//     return 0;
// }