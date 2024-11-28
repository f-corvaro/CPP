/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:22:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:36:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <iostream>

int main() 
{
    std::cout << "Requested from subject:" << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl << "Additional tests:" << std::endl;

    Fixed c(10);
    Fixed d(20);

    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    Fixed e(5.5f);
    Fixed f(2.2f);

    std::cout << "e + f: " << (e + f) << std::endl;
    std::cout << "e - f: " << (e - f) << std::endl;
    std::cout << "e * f: " << (e * f) << std::endl;
    std::cout << "e / f: " << (e / f) << std::endl;

    Fixed g;

    std::cout << "g: " << g << std::endl;
    std::cout << "++g: " << ++g << std::endl;
    std::cout << "g++: " << g++ << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "--g: " << --g << std::endl;
    std::cout << "g--: " << g-- << std::endl;
    std::cout << "g: " << g << std::endl;

    Fixed h(3.3f);
    Fixed i(4.4f);

    std::cout << "min(h, i): " << Fixed::min(h, i) << std::endl;
    std::cout << "max(h, i): " << Fixed::max(h, i) << std::endl;

    const Fixed j(1.1f);
    const Fixed k(2.2f);

    std::cout << "min(j, k): " << Fixed::min(j, k) << std::endl;
    std::cout << "max(j, k): " << Fixed::max(j, k) << std::endl;

    return 0;
}
