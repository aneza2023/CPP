#include "Array.hpp"

int main(void) {

    Array<int> Jana;
    Array<std::string> Dana(5);
    Array<double> Bara(3);

    unsigned int n = 2;
    unsigned int k = 8;
    std::cout << "number of elements: " << Bara.size() << std::endl;
    
    try {
        std::cout << "element number " << n << ": " << Bara[n] << std::endl;
        std::cout << std::endl;

        Bara[n] = 8;
        Array<double> copyBara = Bara;
        std::cout << "element number " << n << " after change: " << Bara[n] << std::endl;
        std::cout << "element number " << n << " copy: " << copyBara[n] << std::endl;
        std::cout << std::endl;

        copyBara[1] = 3;
        std::cout << "element number " << 1 << " original: " << Bara[1] << std::endl;
        std::cout << "element number " << 1 << " copy: " << copyBara[1] << std::endl;
        std::cout << std::endl;

        std::cout << "element number " << k << ": " << Bara[k] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "index out of bounds" << std::endl;
    }

    return 0;
}