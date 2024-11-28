/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:43:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/26 11:59:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/**
 * @brief Entry point of the program.
 * 
 * This function demonstrates the usage of the Fixed class.
 * It creates instances of Fixed, uses the copy constructor and copy assignment 
 * operator, and prints the raw bits of the fixed-point numbers.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main(void) 
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
