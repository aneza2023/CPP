/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:55:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/11/11 15:43:16 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    if (argc == 1)
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int index = 1; index < argc; index++){
        std:: string origString(argv[index]);
        for (int i = 0; i < (int)origString.length(); i++){
            std:: cout << (char)toupper(origString[i]);
        }
        if (index + 1 != argc)
            std:: cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
