/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:05:28 by anezka            #+#    #+#             */
/*   Updated: 2025/11/04 17:16:32 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    _value = value * 256; //or value << this._bits;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called\n";
    _value = value / 256; //or value << this._bits;
}

Fixed::Fixed(const Fixed &orig)
{
    std::cout << "Copy constructor called\n";
    *this = orig;
}

Fixed &Fixed:: operator=(const Fixed& orig)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &orig)
        this->_value = orig.getRawBits();
    return (*this);
}

// std::string &Fixed:: operator<<(const Fixed& orig)
// {
//     std::cout << "Overload of the isertion operator called\n";
//     return ()
// }

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

//maybe this not necessary and just returning values 
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    int raw = this->_value * 256.0;
    return raw;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->_value = raw / 256.0;
}
float Fixed::toFloat(void) const
{
    float floatValue = this->_value * 256;
    return floatValue;
}
        
int Fixed::toInt(void) const
{
    int intValue = this->_value / 256;
    return intValue;
}