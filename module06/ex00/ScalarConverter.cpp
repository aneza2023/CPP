#include "ScalarConverter.hpp"

enum InputType {
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_PSEUDO_FLOAT,
    TYPE_DOUBLE,
    TYPE_PSEUDO_DOUBLE,
    TYPE_UNKNOWN
};

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &orig) {
    *this = orig;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &orig) {
    (void)orig;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool isInputChar(std::string arg) {
        
    if (arg.empty()) {
        return false;
    }
    std::istringstream iss(arg);
    char value;

    iss >> value;
    if (iss.eof() && !iss.fail()) {
        return true;
    }
    if (!iss.eof()) {
        iss >> std::ws;
        if (iss.eof() && !iss.fail()) {
            return true;
        }
    }
    return false;
}

bool isInputInt(std::string arg) {
    
    if (arg.empty()) {
        return false;
    }
    std::istringstream iss(arg);
    int value;

    iss >> value;
    if (iss.eof() && !iss.fail()) {
        return true;
    }
    if (!iss.eof()) {
        iss >> std::ws;
        if (iss.eof() && !iss.fail()) {
            return true;
        }
    }
    return false;
}

bool isInputFloat(std::string arg) {
        
    if (arg.empty()) {
        return false;
    }
    std::istringstream iss(arg);
    float value;

    iss >> value;
    if (iss.eof() && !iss.fail()) {
        return true;
    }
    if (!iss.eof()) {
        iss >> std::ws;
        if (iss.eof() && !iss.fail()) {
            return true;
        }
    }
    return false;
}

bool isInputDouble(std::string arg) {    
    
    if (arg.empty()) {
        return false;
    }
    std::istringstream iss(arg);
    double value;

    iss >> value;
    if (iss.eof() && !iss.fail()) {
        return true;
    }
    if (!iss.eof()) {
        iss >> std::ws;
        if (iss.eof() && !iss.fail()) {
            return true;
        }
    }
    return false;
}

bool isPseudoFloat(std::string arg) {
    if (arg == "nanf" || arg == "+inff" || arg == "-inff") {
        return true;
    }
    return false;
}

bool isPseudoDouble(std::string arg) {
    if (arg == "nan" || arg == "+inf" || arg == "-inf") {
        return true;
    }
    return false;
}

InputType detectType(std::string arg) {
    
    if (isInputInt(arg)) {
        return TYPE_INT;
    } else if (isInputFloat(arg)) {
        return TYPE_FLOAT;
    } else if (isInputDouble(arg)) {
        return TYPE_DOUBLE;
    } else if (isInputChar(arg)) {
        return TYPE_CHAR;
    } else if (isPseudoFloat(arg)) {
        return TYPE_PSEUDO_FLOAT;
    } else if (isPseudoDouble(arg)) {
        return TYPE_PSEUDO_DOUBLE;
    } else {
        return TYPE_UNKNOWN;
    }
}


void ScalarConverter::convert(std::string arg) {

    char    c = 0;
    int     i = 0;
    float   f = 0;
    double  d = 0;

    if (arg.empty()) {
        std::cout << "Error: Nothing to convert" << std::endl;
        return;
    }

    InputType type = detectType(arg);
    std::istringstream iss(arg);

    switch (type) {

        case TYPE_CHAR:
            c = arg[0];
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
            std::cout << "literal char: " << c << std::endl;
            std::cout << "value int: " << i << std::endl << "value float: " << f << std::endl << "value double: " << d << std::endl;
            break;

        case TYPE_INT:
            iss >> i;
            c = static_cast<char>(i);
            f = static_cast<float>(i);
            d = static_cast<double>(i);
            std::cout << "literal int: " << i << std::endl;
            std::cout << "value char: " << c << std::endl << "value float: " << f << std::endl << "value double: " << d << std::endl;
            break;

        case TYPE_FLOAT:
            iss >> f;
            c = static_cast<char>(f);
            i = static_cast<int>(f);
            d = static_cast<double>(f);
            std::cout << "literal float: " << f << std::endl;
            std::cout << "value char: " << c << std::endl << "value int: " << i << std::endl << "value double: " << d << std::endl;
            break;

        case TYPE_DOUBLE:
            iss >> d;
            c = static_cast<char>(d);
            i = static_cast<int>(d);
            f = static_cast<float>(d);
            std::cout << "literal double: " << d << std::endl;
            std::cout << "value char: " << c << std::endl << "value int: " << i << std::endl << "value float: " << f << std::endl;
            break;

        default:
            std::cout << "Error: Unknown input type" << std::endl;
            return;
    }

}