#include "BitcoinExchange.hpp"

btcEx::btcEx() {

    std::ifstream database("data.csv");
    if (!database.is_open())
        throw std::runtime_error("Error: could not open file.");

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


    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (size_t i = 0; i < date.length(); i++) {
        if (!isdigit(static_cast<unsigned char>(date[i])) && (i != 4 && i != 7))
            return false;
    }

    bool lapYear = false;
    int year = std::atoi(date.substr(0, 4).c_str());
    if (year < 0)
        return false;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        lapYear = true;

    int month = std::atoi(date.substr(5, 2).c_str());
    if (month < 1 || month > 12)
        return false;

    int day = std::atoi(date.substr(8, 2).c_str());
    int daysM[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 1 || day > 31)
        return false;
    if (day > daysM[month])
        return false;
    if (month == 2 && !lapYear && day > 28)
        return false;  
    
    return true;
}

//float or positive int 0 - 1000
bool btcEx::isValueValid(std::string value) {

    size_t i = 0;
    if (i < value.length() && (value[i] == '-' || value[i] == '+'))
        i++;

    bool digit = false;
    bool comma = false;
    while(i < value.length()) {
        if (std::isdigit(static_cast<unsigned char>(value[i])))
            digit = true;
        else if (value[i] == '.' && !comma)
            comma = true;
        else {
            std::cerr << "Error: bad input => " << value << std::endl;
            return false;
        }
        i++;
    }
    if (!digit) {
        std::cerr << "Error: bad input => " << value << std::endl;
        return false;
    }

    double dvalue = std::atof(value.c_str());
    if (dvalue < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (dvalue > 1000) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void btcEx::calculateValue(std::string date, float value) {

    std::map<std::string, float>::const_iterator it = this->_data.upper_bound(date);

    if (it == this->_data.begin()) {
        std::cerr << "Error: there is not a previous date in the database" << std::endl;
        return ;
    }
    --it;

    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}

std::string btcEx::trim(const std::string& toTrim) {

    size_t start = toTrim.find_first_not_of(" \t\r");
    if (start == std::string::npos)
        return "";
    
    size_t end = toTrim.find_last_not_of(" \t\r");
    std::string result = toTrim.substr(start, end - start + 1);
    return result;
}

void btcEx::processInputData(const std::string& filename) {

    std::string line;
    std::ifstream database(filename.c_str());
    if (!database.is_open())
        throw std::runtime_error("Error: could not open file.");

    size_t pipe;
    std::string dateInput;
    std::string valueInput;
    bool firstLine = true;
    while (std::getline(database, line, '\n')) {

        if (firstLine) {
            firstLine = false;
            if (trim(line) == "date | value")
                continue;
        }

        if (trim(line).empty())
            continue;

        pipe = line.find('|');
        if (pipe == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        dateInput = trim(line.substr(0, pipe));
        valueInput = trim(line.substr(pipe + 1));

        if (!isDateValid(dateInput)) {
            std::cerr << "Error: bad input => " << dateInput << std::endl; 
            continue;
        }
        if (!isValueValid(valueInput))
           continue;

        float value = std::atof(valueInput.c_str());
        calculateValue(dateInput, value);
    }

}
