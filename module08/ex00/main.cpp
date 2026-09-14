#include "easyfind.hpp"

int main(void) {

    std::vector<int> vectorInt;
    vectorInt.push_back(1);
    vectorInt.push_back(2);
    vectorInt.push_back(8);
    vectorInt.push_back(10);
    vectorInt.push_back(3);
    vectorInt.push_back(17);
    
    try {
        std::vector<int>::iterator it = ::easyfind(vectorInt, 10);
        std::cout << "integer " << *it << " found" << std::endl;

        it = ::easyfind(vectorInt, 9);
        std::cout << "integer " << *it << " found" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "integer not found" << std::endl;
    }

    std::cout << std::endl;

    std::list<int> listInt;
    listInt.push_back(12);
    listInt.push_back(10);
    listInt.push_back(3);

    try {
        std::list<int>::iterator it = ::easyfind(listInt, 3);
        std::cout << "integer " << *it << " found" << std::endl;

        it = ::easyfind(listInt, 5);
        std::cout << "integer " << *it << " found" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "integer not found" << std::endl;
    }

    return 0;
}