#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP 

#include <iomanip>
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

class btcEx {
    
    private:
        std::map<std::string, float>    _data;

        bool isDateValid(std::string date);
        bool isValueValid(std::string value);
    
    public:
        btcEx();
        btcEx(const btcEx& orig);
        btcEx& operator=(const btcEx& orig);
        ~btcEx();

        void processInputData(const std::string& filename);

} ;

#endif