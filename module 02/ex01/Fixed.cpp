#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called\n";
    this->_value = value << _bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called\n";
    this->_value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &orig) {
    std::cout << "Copy constructor called\n";
    *this = orig;
}

Fixed &Fixed:: operator=(const Fixed& orig) {
    std::cout << "Copy assignment operator called\n";
    if (this != &orig)
        this->_value = orig.getRawBits();
    return (*this);
}

// std::string &Fixed:: operator<<(const Fixed& orig) {
//     std::cout << "Overload of the isertion operator called\n";
//     return ()
// }

Fixed::~Fixed(void) {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called\n";
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called\n";
    this->_value = raw;
}
float Fixed::toFloat(void) const {
    float floatValue = (float)this->_value / (float)(1 << _bits);
    return floatValue;
}
        
int Fixed::toInt(void) const {
    int intValue = this->_value >> _bits;
    return intValue;
}

std::ostream &operator<<(std::ostream &outputStream, Fixed const &value) {
    outputStream << value.toFloat();
    return outputStream;
}