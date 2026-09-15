#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
    
    private:
        T               *_value;
        unsigned int    _arraySize;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &orig);
        Array& operator=(const Array &orig);
        ~Array();

        T& operator[](unsigned int i);
        unsigned int size(void) const;
};

#include "Array.tpp"

#endif