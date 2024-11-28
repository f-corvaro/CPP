/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:29:41 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

/**
 * @brief Computes the sign of a point relative to a line segment.
 * 
 * @param p1 The first point of the line segment.
 * @param p2 The second point of the line segment.
 * @param p3 The point to check.
 * @return The sign value.
 */
static Fixed sign(Point const p1, Point const p2, Point const p3) 
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

/**
 * @brief Checks if a point is on the edge of a line segment.
 * 
 * @param p1 The first point of the line segment.
 * @param p2 The second point of the line segment.
 * @param point The point to check.
 * @return True if the point is on the edge, false otherwise.
 */
static bool isPointOnEdge(Point const p1, Point const p2, Point const point) 
{
    Fixed crossProduct = (point.getY() - p1.getY()) * (p2.getX() - p1.getX()) - (point.getX() - p1.getX()) * (p2.getY() - p1.getY());
    if (crossProduct != Fixed(0)) 
        return false;
    Fixed dotProduct = (point.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (point.getY() - p1.getY()) * (p2.getY() - p1.getY());
    if (dotProduct < Fixed(0)) 
        return false;
    Fixed squaredLengthBA = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
    if (dotProduct > squaredLengthBA) 
        return false;
    return true;
}

/**
 * @brief Determines if a point is inside a triangle.
 * 
 * @param a The first vertex of the triangle.
 * @param b The second vertex of the triangle.
 * @param c The third vertex of the triangle.
 * @param point The point to check.
 * @return True if the point is inside the triangle, false otherwise.
 */
bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    if (isPointOnEdge(a, b, point) || isPointOnEdge(b, c, point) || isPointOnEdge(c, a, point)) 
        return false;

    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
