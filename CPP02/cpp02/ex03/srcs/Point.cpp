/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:29:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:37:12 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * @brief Default constructor.
 * 
 * Initializes the point to (0, 0).
 */
Point::Point() : x(0), y(0) {}

/**
 * @brief Parameterized constructor.
 * 
 * Initializes the point with the given x and y coordinates.
 * 
 * @param xValue The x-coordinate of the point.
 * @param yValue The y-coordinate of the point.
 */
Point::Point(const float xValue, const float yValue) : x(xValue), y(yValue) {}

/**
 * @brief Copy constructor.
 * 
 * Initializes the point with the values of another point.
 * 
 * @param other The point to copy.
 */
Point::Point(const Point &other) : x(other.x), y(other.y) {}

/**
 * @brief Destructor.
 * 
 * Destroys the point.
 */
Point::~Point() {}

/**
 * @brief Copy assignment operator.
 * 
 * Assigns the values of another point to this point.
 * 
 * @param other The point to assign.
 * @return A reference to this point.
 */
Point &Point::operator=(const Point &other) 
{
    if (this != &other) 
    {
        // Since x and y are const, we cannot assign them.
        // This is just to satisfy the assignment operator requirement.
    }
    return *this;
}

/**
 * @brief Gets the x-coordinate of the point.
 * 
 * @return The x-coordinate of the point.
 */
Fixed Point::getX() const {
    return x;
}

/**
 * @brief Gets the y-coordinate of the point.
 * 
 * @return The y-coordinate of the point.
 */
Fixed Point::getY() const {
    return y;
}
