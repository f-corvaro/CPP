/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:29:16 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

/**
 * @class Point
 * @brief A class that represents a point in 2D space using fixed-point numbers.
 * 
 * The Point class provides a representation of a point in 2D space with x and y coordinates
 * represented as fixed-point numbers. It includes constructors, a destructor, and member
 * functions to get the x and y coordinates.
 */
class Point 
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &other);
        ~Point();
        Point &operator=(const Point &other);

        Fixed getX() const;
        Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
