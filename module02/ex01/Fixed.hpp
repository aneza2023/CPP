#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const float floatValue);
        Fixed(const int value);
        Fixed(const Fixed &orig);
        Fixed &operator=(const Fixed &orig);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

//look at this more
std::ostream &operator<<(std::ostream &outputStream, Fixed const &value);

#endif