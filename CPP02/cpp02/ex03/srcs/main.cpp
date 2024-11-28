/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:28:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:37:09 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    std::cout << std::boolalpha;

    Point a(0, 0);
    Point b(0, 5);
    Point c(5, 0);

    std::cout << "Testing with points inside the triangle:" << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(1, 1): " << bsp(a, b, c, Point(1, 1)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(1, 2): " << bsp(a, b, c, Point(1, 2)) << std::endl;

    std::cout << "Testing with points on the edges of the triangle:" << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 3): " << bsp(a, b, c, Point(0, 3)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(2.5, 0): " << bsp(a, b, c, Point(2.5, 0)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(2.5, 2.5): " << bsp(a, b, c, Point(2.5, 2.5)) << std::endl;

    std::cout << "Testing with points at the vertices of the triangle:" << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 0): " << bsp(a, b, c, Point(0, 0)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 5): " << bsp(a, b, c, Point(0, 5)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(5, 0): " << bsp(a, b, c, Point(5, 0)) << std::endl;

    std::cout << "Testing with points outside the triangle:" << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(10, 10): " << bsp(a, b, c, Point(10, 10)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(-1, -1): " << bsp(a, b, c, Point(-1, -1)) << std::endl;
    std::cout << "a(0, 0), b(0, 5), c(5, 0), point(6, 6): " << bsp(a, b, c, Point(6, 6)) << std::endl;

    return 0;
}
