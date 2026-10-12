#include "BitcoinExchange.hpp"

btcEx::btcEx() {

    std::ifstream database("data.csv");
    if (!database.is_open())
        throw std::runtime_error("Error: could not open the file with database");

    std::string line;
    std::getline(database, line, '\n');
    std::string date;
    std::string value;
    size_t  comma;
    while (std::getline(database, line, '\n')) {

        comma = line.find(',');
        if (comma == std::string::npos)
            continue;
        date = line.substr(0, comma);
        value = line.substr(comma + 1);
        this->_data[date] = std::atof(value.c_str());
    }
    database.close();
}

//should do through iterators instead?
btcEx::btcEx(const btcEx& orig) {

    *this = orig;
}

btcEx& btcEx::operator=(const btcEx& orig) {

    if (this == &orig)
        return *this;
    this->_data = orig._data;
    return *this;
}

btcEx::~btcEx() {}

//format year/month/day
bool btcEx::isDateValid(std::string date) {

    
}

//float or positive int 0 - 1000
bool btcEx::isValueValid(std::string value) {

    float fvalue = std::atof(value.c_str());
    if (fvalue < 0 || fvalue > 1000)
        return false;
    return true;
}

void btcEx::processInputData(const std::string& filename) {

    std::string line;
    std::ifstream database(filename);
    if (!database.is_open())
        throw std::runtime_error("Error: could not open the input data");
    std::getline(database, line, '\n');

    size_t comma;
    std::string date;
    std::string value;
    while (std::getline(database, line, '\n')) {

        comma = line.find('|');
        if (comma == std::string::npos)
            continue;
        date = line.substr(0, comma);
        value = line.substr(comma + 1);
        
        this->_data[date] = std::atof(value.c_str());
    }

}

