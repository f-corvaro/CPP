/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:43:20 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:03 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
        this->_fixedPointValue = other.getRawBits();
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
