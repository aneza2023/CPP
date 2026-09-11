#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void printT(const T &a) {
    std::cout << a << std::endl;
}

void plusOne(int &a) {
    a += 1;
    std::cout << "int with addition: " << a << std::endl;
}

template <typename T, typename Func>
void iter(T *addressArr, const size_t lenArr, Func funcArray){

    for (size_t i = 0; i < lenArr; i++) {
        funcArray(addressArr[i]);
    }
}

#endif