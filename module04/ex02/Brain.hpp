#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    public:
        std::string ideas[100];
        Brain();
        Brain(const std::string &idea);
        Brain(const Brain &orig);
        Brain &operator=(const Brain &orig);
        ~Brain();
} ;

#endif