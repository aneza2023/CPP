#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <inttypes.h>

struct Data;

class Serializer {
    private:
        Serializer();
        Serializer(Serializer const &orig);
        Serializer& operator=(Serializer const &orig);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif