#include "iter.hpp"

int main(void) {

    int arrayInt[6] = {1, 2, 6, 7, 3, 5};
    ::iter(arrayInt, 6, printT<int>);

    std::string arrayStr[3] = {"Jana", "Dana", "Milada"};
    ::iter(arrayStr, 3, printT<std::string>);

    ::iter(arrayInt, 6, plusOne);

    const int constArrayInt[3] = {1, 8, 9};
    ::iter(constArrayInt, 3, printT<const int>);

    // ::iter(constArrayInt, 3, plusOne);

    return 0;
}