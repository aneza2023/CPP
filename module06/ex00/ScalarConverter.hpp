#ifndef ScalarCONVERTER_HPP
#define ScalarCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>
#include <cctype.h>
#include <cmath>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &orig);
        ScalarConverter& operator=(ScalarConverter const &orig);
        ~ScalarConverter();

    public:
        static void convert(std::string arg);
};

#endif