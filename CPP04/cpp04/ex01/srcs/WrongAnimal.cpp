/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:00:49 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:56:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

/**
 * @brief Default constructor for the WrongAnimal class.
 * Initializes the type to "WrongAnimal".
 */
WrongAnimal::WrongAnimal() : type("WrongAnimal") 
{
    std::cout << "WrongAnimal created" << std::endl;
}

/**
 * @brief Copy constructor for the WrongAnimal class.
 * @param other The WrongAnimal object to copy from.
 */
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) 
{
    std::cout << "WrongAnimal copied" << std::endl;
}

/**
 * @brief Assignment operator for the WrongAnimal class.
 * @param other The WrongAnimal object to assign from.
 * @return A reference to the assigned WrongAnimal object.
 */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) 
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal assigned" << std::endl;
    return *this;
}

/**
 * @brief Destructor for the WrongAnimal class.
 */
WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

/**
 * @brief Gets the type of the wrong animal.
 * @return The type of the wrong animal.
 */
std::string WrongAnimal::getType() const 
{
    return type;
}

/**
 * @brief Makes a sound specific to the wrong animal.
 * Prints "WrongAnimal sound" to the standard output.
 */
void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal sound" << std::endl;
}
