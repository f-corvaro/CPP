/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:22:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <iostream>

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
 * @param intValue The integer value to convert.
 */
Fixed::Fixed(const int intValue) 
{
    std::cout << "Int constructor called" << std::endl;
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
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

/**
 * @brief Destructor.
 * 
 * Destroys the fixed-point number.
 */
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

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
    std::cout << "Copy assignment operator called" << std::endl;
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
 * @brief Pre-increment operator.
 * 
 * Increments the fixed-point value by 1.
 * 
 * @return A reference to this fixed-point number after incrementing.
 */
Fixed &Fixed::operator++() 
{
    _fixedPointValue++;
    return *this;
}

/**
 * @brief Post-increment operator.
 * 
 * Increments the fixed-point value by 1.
 * 
 * @return The fixed-point number before incrementing.
 */
Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}

/**
 * @brief Pre-decrement operator.
 * 
 * Decrements the fixed-point value by 1.
 * 
 * @return A reference to this fixed-point number after decrementing.
 */
Fixed &Fixed::operator--() 
{
    _fixedPointValue--;
    return *this;
}

/**
 * @brief Post-decrement operator.
 * 
 * Decrements the fixed-point value by 1.
 * 
 * @return The fixed-point number before decrementing.
 */
Fixed Fixed::operator--(int) 
{
    Fixed temp = *this;
    --(*this);
    return temp;
}

/**
 * @brief Finds the minimum of two fixed-point numbers.
 * 
 * @param a The first fixed-point number.
 * @param b The second fixed-point number.
 * @return A reference to the smaller fixed-point number.
 */
Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    return (a < b) ? a : b;
}

/**
 * @brief Finds the minimum of two constant fixed-point numbers.
 * 
 * @param a The first constant fixed-point number.
 * @param b The second constant fixed-point number.
 * @return A reference to the smaller constant fixed-point number.
 */
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    return (a < b) ? a : b;
}

/**
 * @brief Finds the maximum of two fixed-point numbers.
 * 
 * @param a The first fixed-point number.
 * @param b The second fixed-point number.
 * @return A reference to the larger fixed-point number.
 */
Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    return (a > b) ? a : b;
}

/**
 * @brief Finds the maximum of two constant fixed-point numbers.
 * 
 * @param a The first constant fixed-point number.
 * @param b The second constant fixed-point number.
 * @return A reference to the larger constant fixed-point number.
 */
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    return (a > b) ? a : b;
}

/**
 * @brief Stream insertion operator.
 * 
 * Inserts the floating-point representation of the fixed-point number into the output stream.
 * 
 * @param out The output stream.
 * @param fixed The fixed-point number to insert.
 * @return The output stream.
 */
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}
