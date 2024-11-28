/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:04:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:13 by fcorvaro         ###   ########.fr       */
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
 */
class Fixed 
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed(); // Default constructor
        Fixed(const int value); // Integer constructor
        Fixed(const float value); // Float constructor
        Fixed(const Fixed &other); // Copy constructor
        Fixed &operator=(const Fixed &other); // Copy assignment operator
        ~Fixed(); // Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
