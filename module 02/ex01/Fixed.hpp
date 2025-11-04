/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:52:23 by anezka            #+#    #+#             */
/*   Updated: 2025/11/04 15:32:45 by anezka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(int intValue);
        Fixed(float floatValue);
        Fixed(const int value);
        Fixed(const Fixed &orig);
        Fixed &operator=(const Fixed &orig);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

#endif