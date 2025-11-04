/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezka <anezka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:21:31 by anezka            #+#    #+#             */
/*   Updated: 2025/11/04 14:54:45 by anezka           ###   ########.fr       */
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
        Fixed(const Fixed &orig);
        Fixed &operator=(const Fixed &orig);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif