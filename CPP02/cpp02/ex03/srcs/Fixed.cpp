/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:28:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:37:06 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

/**
 * @brief Default constructor.
 * 
 * Initializes the fixed-point number value to 0.
 */
Fixed::Fixed() : _fixedPointValue(0) {}

/**
 * @brief Integer constructor.
 * 
 * Converts the integer to the corresponding fixed-point value.
 * 
 * @param intValue The integer value to convert.
 */
Fixed::Fixed(const int intValue) 
{
    _fixedPointValue = intValue << _fractionalBits;
}

/**
 * @brief Float constructor.
 * 
 * Converts the floating-point number to the corresponding fixed-point value.
 * 
 * @param floatValue The floating-point value to convert.
 */
Fixed::Fixed(const float floatValue) 
{
    _fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

/**
 * @brief Copy constructor.
 * 
 * Initializes the fixed-point number with the value of another fixed-point number.
 * 
 * @param other The fixed-point number to copy.
 */
Fixed::Fixed(const Fixed &other) 
{
    *this = other;
}

/**
 * @brief Destructor.
 * 
 * Destroys the fixed-point number.
 */
Fixed::~Fixed() {}

/**
 * @brief Copy assignment operator.
 * 
 * Assigns the value of another fixed-point number to this fixed-point number.
 * 
 * @param other The fixed-point number to assign.
 * @return A reference to this fixed-point number.
 */
Fixed &Fixed::operator=(const Fixed &other) 
{
    if (this != &other)
        _fixedPointValue = other.getRawBits();
    return *this;
}

/**
 * @brief Gets the raw fixed-point value.
 * 
 * @return The raw fixed-point value.
 */
int Fixed::getRawBits() const 
{
    return _fixedPointValue;
}

/**
 * @brief Sets the raw fixed-point value.
 * 
 * @param raw The raw fixed-point value to set.
 */
void Fixed::setRawBits(int const raw) 
{
    _fixedPointValue = raw;
}

/**
 * @brief Converts the fixed-point value to a floating-point number.
 * 
 * @return The floating-point representation of the fixed-point value.
 */
float Fixed::toFloat() const 
{
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

/**
 * @brief Converts the fixed-point value to an integer.
 * 
 * @return The integer representation of the fixed-point value.
 */
int Fixed::toInt() const 
{
    return _fixedPointValue >> _fractionalBits;
}

/**
 * @brief Addition operator.
 * 
 * Adds two fixed-point numbers.
 * 
 * @param other The fixed-point number to add.
 * @return The result of the addition.
 */
Fixed Fixed::operator+(const Fixed &other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

/**
 * @brief Subtraction operator.
 * 
 * Subtracts another fixed-point number from this fixed-point number.
 * 
 * @param other The fixed-point number to subtract.
 * @return The result of the subtraction.
 */
Fixed Fixed::operator-(const Fixed &other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

/**
 * @brief Multiplication operator.
 * 
 * Multiplies two fixed-point numbers.
 * 
 * @param other The fixed-point number to multiply with.
 * @return The result of the multiplication.
 */
Fixed Fixed::operator*(const Fixed &other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

/**
 * @brief Division operator.
 * 
 * Divides this fixed-point number by another.
 * 
 * @param other The fixed-point number to divide by.
 * @return The result of the division.
 */
Fixed Fixed::operator/(const Fixed &other) const 
{
    return Fixed(this->toFloat() / other.toFloat());
}

/**
 * @brief Greater than operator.
 * 
 * Compares if this fixed-point number is greater than another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is greater than the other, false otherwise.
 */
bool Fixed::operator>(const Fixed &other) const 
{
    return _fixedPointValue > other._fixedPointValue;
}

/**
 * @brief Less than operator.
 * 
 * Compares if this fixed-point number is less than another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is less than the other, false otherwise.
 */
bool Fixed::operator<(const Fixed &other) const
 {
    return _fixedPointValue < other._fixedPointValue;
}

/**
 * @brief Greater than or equal to operator.
 * 
 * Compares if this fixed-point number is greater than or equal to another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is greater than or equal to the other, false otherwise.
 */
bool Fixed::operator>=(const Fixed &other) const 
{
    return _fixedPointValue >= other._fixedPointValue;
}

/**
 * @brief Less than or equal to operator.
 * 
 * Compares if this fixed-point number is less than or equal to another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is less than or equal to the other, false otherwise.
 */
bool Fixed::operator<=(const Fixed &other) const 
{
    return _fixedPointValue <= other._fixedPointValue;
}

/**
 * @brief Equality operator.
 * 
 * Compares if this fixed-point number is equal to another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is equal to the other, false otherwise.
 */
bool Fixed::operator==(const Fixed &other) const 
{
    return _fixedPointValue == other._fixedPointValue;
}

/**
 * @brief Inequality operator.
 * 
 * Compares if this fixed-point number is not equal to another.
 * 
 * @param other The fixed-point number to compare with.
 * @return True if this fixed-point number is not equal to the other, false otherwise.
 */
bool Fixed::operator!=(const Fixed &other) const 
{
    return _fixedPointValue != other._fixedPointValue;
}
