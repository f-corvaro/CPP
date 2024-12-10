/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:00:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:32:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

/**
 * @brief Default constructor for the Cat class.
 * Initializes the type to "Cat".
 */
Cat::Cat() 
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

/**
 * @brief Copy constructor for the Cat class.
 * @param other The Cat object to copy from.
 */
Cat::Cat(const Cat& other) : Animal(other) 
{
    std::cout << "Cat copied" << std::endl;
}

/**
 * @brief Assignment operator for the Cat class.
 * @param other The Cat object to assign from.
 * @return A reference to the assigned Cat object.
 */
Cat& Cat::operator=(const Cat& other) 
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

/**
 * @brief Destructor for the Cat class.
 */
Cat::~Cat() 
{
    std::cout << "Cat destroyed" << std::endl;
}

/**
 * @brief Makes a sound specific to the cat.
 * Prints "Meow!" to the standard output.
 */
void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}
