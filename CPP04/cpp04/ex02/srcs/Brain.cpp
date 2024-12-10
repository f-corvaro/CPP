/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:14:41 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:44:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/**
 * @brief Default constructor for the Brain class.
 * Initializes the Brain object.
 */
Brain::Brain() 
{
    std::cout << "Brain created" << std::endl;
}

/**
 * @brief Copy constructor for the Brain class.
 * @param other The Brain object to copy from.
 */
Brain::Brain(const Brain& other) 
{
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

/**
 * @brief Assignment operator for the Brain class.
 * @param other The Brain object to assign from.
 * @return A reference to the assigned Brain object.
 */
Brain& Brain::operator=(const Brain& other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 100; ++i) 
            ideas[i] = other.ideas[i];
    }
    return *this;
}

/**
 * @brief Destructor for the Brain class.
 */
Brain::~Brain() 
{
    std::cout << "Brain destroyed" << std::endl;
}
