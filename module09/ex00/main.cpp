#include "BitcoinExchange.hpp"


int main(int argc, char* argv[]) {
    
    if (argc != 2) {
        std::cerr << "Error: Could not open file." << std::endl;
        return 1;
    }

    try {
        btcEx btc;
        btc.processInputData(argv[1]);
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}