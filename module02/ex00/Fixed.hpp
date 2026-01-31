#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &orig);
        Fixed &operator=(const Fixed &orig);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif