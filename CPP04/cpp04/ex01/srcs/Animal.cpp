/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:59:58 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:29:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

/**
 * @brief Default constructor for the Animal class.
 * Initializes the type to "Animal".
 */
Animal::Animal() : type("Animal") 
{
    std::cout << "Animal created" << std::endl;
}

/**
 * @brief Copy constructor for the Animal class.
 * @param other The Animal object to copy from.
 */
Animal::Animal(const Animal& other) : type(other.type) 
{
    std::cout << "Animal copied" << std::endl;
}

/**
 * @brief Assignment operator for the Animal class.
 * @param other The Animal object to assign from.
 * @return A reference to the assigned Animal object.
 */
Animal& Animal::operator=(const Animal& other) 
{
    if (this != &other) 
        type = other.type;
    std::cout << "Animal assigned" << std::endl;
    return *this;
}

/**
 * @brief Virtual destructor for the Animal class.
 */
Animal::~Animal() 
{
    std::cout << "Animal destroyed" << std::endl;
}

/**
 * @brief Gets the type of the Animal.
 * @return The type of the Animal as a string.
 */
std::string Animal::getType() const 
{
    return type;
}

/**
 * @brief Makes a sound specific to the Animal.
 */
void Animal::makeSound() const 
{
    std::cout << "Animal sound" << std::endl;
}
