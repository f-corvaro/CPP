/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:01:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:30:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

/**
 * @brief Default constructor for the WrongCat class.
 * Initializes the type to "WrongCat".
 */
WrongCat::WrongCat() 
{
    type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

/**
 * @brief Copy constructor for the WrongCat class.
 * @param other The WrongCat object to copy from.
 */
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) 
{
    std::cout << "WrongCat copied" << std::endl;
}

/**
 * @brief Assignment operator for the WrongCat class.
 * @param other The WrongCat object to assign from.
 * @return A reference to the assigned WrongCat object.
 */
WrongCat& WrongCat::operator=(const WrongCat& other) 
{
    if (this != &other) 
        WrongAnimal::operator=(other);
    std::cout << "WrongCat assigned" << std::endl;
    return *this;
}

/**
 * @brief Destructor for the WrongCat class.
 */
WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destroyed" << std::endl;
}

/**
 * @brief Makes a sound specific to the wrong cat.
 * Prints "WrongMeow!" to the standard output.
 */
void WrongCat::makeSound() const 
{
    std::cout << "WrongMeow!" << std::endl;
}
