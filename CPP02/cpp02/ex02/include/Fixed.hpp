/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:22:08 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:32 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

/**
 * @class Fixed
 * @brief A class that represents a fixed-point number.
 * 
 * The Fixed class provides a representation of fixed-point numbers with a specific
 * number of fractional bits. It includes constructors, a destructor, and member
 * functions to get and set the raw value of the fixed-point number, as well as
 * functions to convert between fixed-point and floating-point or integer values.
 * 
 * The class also overloads various operators for comparison, arithmetic, and
 * increment/decrement operations. Additionally, it provides static member functions
 * to find the minimum and maximum of two fixed-point numbers.
 */
class Fixed 
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed &operator=(const Fixed &other);

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat() const;
        int toInt() const;

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        Fixed &operator++();    // Pre-increment
        Fixed operator++(int);  // Post-increment
        Fixed &operator--();    // Pre-decrement
        Fixed operator--(int);  // Post-decrement

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
