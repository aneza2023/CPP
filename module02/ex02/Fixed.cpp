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
    this->_value = roundf(value * (1 << _bits)); //roundf zaokrouhluje dolu
}

Fixed::Fixed(const Fixed &orig) {
    std::cout << "Copy constructor called\n";
    *this = orig;
}

Fixed &Fixed::operator=(const Fixed& orig) {
    std::cout << "Copy assignment operator called\n";
    if (this != &orig)
        this->_value = orig.getRawBits();
    return (*this);
}

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

bool Fixed::operator>(const Fixed &other) const {
    if (this->_value > other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other) const {
    if (this->_value < other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other) const {
    if (this->_value <= other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other) const {
    if (this->_value >= other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other) const {
    if (this->_value == other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other) const {
    if (this->_value != other.getRawBits())
        return true;
    return false;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed temp;
    temp.setRawBits((long)this->_value * (long)other.getRawBits() >> _bits);
    return temp;
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed temp;
    temp.setRawBits(this->_value + other.getRawBits());
    return temp;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed temp;
    temp.setRawBits(this->_value - other.getRawBits());
    return temp;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed temp;
    temp.setRawBits(((long)this->_value << _bits) / (long)other.getRawBits());
    return temp;
}

Fixed &Fixed::operator++() {
    this->_value++;
    return *this;
}

Fixed &Fixed::operator--() {
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->_value++;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->_value--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a > b)
        return b;
    return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a > b)
        return b;
    return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a < b)
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a < b)
        return b;
    return a;
}