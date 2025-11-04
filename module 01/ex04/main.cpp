/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:56:36 by anezka            #+#    #+#             */
/*   Updated: 2025/10/29 15:06:23 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

//maybe add message if not found
//close files afterwards
int main(int argc, char *argv[])
{
    if (argc != 4){
        std::cerr << "Error. Arguments are incorrect\n";
        return 1;
    }
    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string replaceFilename = filename;
    replaceFilename = replaceFilename.insert(replaceFilename.length(), ".replace");
    std::ofstream fileReplace(replaceFilename);
    std::ifstream file(filename);
    std::string line;
    if (file.is_open()){
        while (std::getline(file, line))
        {
            size_t position = line.find(s1);
            if (position != std::string::npos)
            {
                line.erase(position, s1.length());
                line.insert(position, s2);
            }
            fileReplace << line << std::endl;
        }
    }
    else {
        std::cerr << "Error opening file\n";
        return 1;
    }
    return 0;
}
