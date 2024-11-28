/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:04:52 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 15:22:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <cmath>

/**
 * @brief Default constructor.
 * 
 * Initializes the fixed-point number value to 0.
 */
Fixed::Fixed() : _fixedPointValue(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Integer constructor.
 * 
 * Converts the integer to the corresponding fixed-point value.
 * 
 * @param value The integer value to convert.
 */
Fixed::Fixed(const int value) 
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits;
}

/**
 * @brief Float constructor.
 * 
 * Converts the floating-point number to the corresponding fixed-point value.
 * 
 * @param value The floating-point value to convert.
 */
Fixed::Fixed(const float value) 
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

/**
 * @brief Copy constructor.
 * 
 * Initializes the fixed-point number value by copying another Fixed object.
 * 
 * @param other The Fixed object to copy.
 */
Fixed::Fixed(const Fixed &other) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

/**
 * @brief Copy assignment operator.
 * 
 * Assigns the fixed-point number value from another Fixed object.
 * 
 * @param other The Fixed object to assign from.
 * @return Fixed& A reference to the assigned Fixed object.
 */
Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
        this->_fixedPointValue = other._fixedPointValue;
    return *this;
}

/**
 * @brief Destructor.
 * 
 * Destroys the Fixed object.
 */
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Gets the raw value of the fixed-point number.
 * 
 * @return int The raw value of the fixed-point number.
 */
int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

/**
 * @brief Sets the raw value of the fixed-point number.
 * 
 * @param raw The raw value to set.
 */
void Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

/**
 * @brief Converts the fixed-point value to a floating-point value.
 * 
 * @return float The floating-point representation of the fixed-point value.
 */
float Fixed::toFloat(void) const 
{
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

/**
 * @brief Converts the fixed-point value to an integer value.
 * 
 * @return int The integer representation of the fixed-point value.
 */
int Fixed::toInt(void) const 
{
    return _fixedPointValue >> _fractionalBits;
}

/**
 * @brief Overloads the insertion operator to output the floating-point representation of the fixed-point number.
 * 
 * @param out The output stream object.
 * @param fixed The Fixed object to output.
 * @return std::ostream& The output stream object.
 */
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}
