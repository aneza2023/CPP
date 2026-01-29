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

//maybe add message if not found
//close files afterwards
int main(int argc, char *argv[])
{
    if (argc != 4){
        std::cerr << "Error. Arguments are incorrect.\n";
        return 1;
    }
    std::string filename(argv[1]);
    std::string s1(argv[2]);
    // if (s1.empty()){
    //     std:cerr << "S1 cannot be empty\n";
    //     return 1;
    // }
    std::string s2(argv[3]);
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error openning the file\n";
        return 1;
    }
    std::string wholeInput;
    std::string line;
    while(std::getline(inputFile, line))
    {
        wholeInput += line;
        if (!inputFile.eof())
            wholeInput += "\n";
    }
    inputFile.close();
    std::string replaced;
    size_t currentPosition = 0;
    size_t position;
    while(true)
    {
        position = wholeInput.find(s1, currentPosition);
        if (position == std::string::npos)
        {
            replaced.append(wholeInput, currentPosition, std::string::npos);
            break ;
        }
        replaced.append(wholeInput, currentPosition, position - currentPosition);
        replaced += s2;
        currentPosition = position + s1.length();
    }
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error creating file.\n";
        return 1;
    }
    outputFile << replaced;
    outputFile.close();
    return 0;
}
