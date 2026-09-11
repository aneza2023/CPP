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
    char leftover;

    iss >> value;
    iss >> std::noskipws >> leftover;
    iss >> std::ws;
    if (iss.eof() && !iss.fail() && leftover == 'f') {
        return true;
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
    } else if (isInputDouble(arg)) {
        return TYPE_DOUBLE;
    } else if (isInputFloat(arg)) {
        return TYPE_FLOAT;
    } else if (isPseudoDouble(arg)) {
        return TYPE_PSEUDO_DOUBLE;
    } else if (isPseudoFloat(arg)) {
        return TYPE_PSEUDO_FLOAT;
    } else if (isInputChar(arg)) {
        return TYPE_CHAR;
    } else {
        return TYPE_UNKNOWN;
    }
}

void printResults(char c, int i, float f, double d) {

    if (d >= 0 && d <= 127) {
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } 
    else {
        std::cout << "char: impossible" << std::endl;
    }

    if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()) {
        std::cout << "int: " << i << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }

    if (d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max()) {
        std::cout << "float: impossible" << std::endl;
    } else {
        std::cout << "float: " << f;
        if (f == std::floor(f)) {
            std::cout << ".0f" << std::endl;
        }
        else
            std::cout << "f" << std::endl;
    }

    if (d >= -std::numeric_limits<double>::max() && d <= std::numeric_limits<double>::max()) {
        std::cout << "double: " << d;
        if (d == std::floor(d)) {
            std::cout << ".0" << std::endl;
        }
        else
            std::cout << std::endl;
    } else {
        std::cout << "double: impossible" << std::endl;
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
            printResults(c, i, f, d);
            break;

        case TYPE_INT:
            iss >> i;
            c = static_cast<char>(i);
            f = static_cast<float>(i);
            d = static_cast<double>(i);
            printResults(c, i, f, d);
            break;

        case TYPE_FLOAT:
            iss >> f;
            d = static_cast<double>(f);
            if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()) {
                i = static_cast<int>(d);
                c = static_cast<char>(f);
            }
            printResults(c, i, f, d);
            break;

        case TYPE_PSEUDO_FLOAT:
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << arg << std::endl; 
            std::cout << "double: " << arg.substr(0, arg.length() - 1) << std::endl;
            break;

        case TYPE_DOUBLE:
            iss >> d;
            if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()) {
                i = static_cast<int>(d);
                c = static_cast<char>(d);
            }
            f = static_cast<float>(d);
            printResults(c, i, f, d);
            break;
                
        case TYPE_PSEUDO_DOUBLE:
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << arg + 'f' << std::endl;
            std::cout << "double: " << arg << std::endl;
            break;

        default:
            std::cout << "Error: Unknown input type" << std::endl;
            return;
    }

}