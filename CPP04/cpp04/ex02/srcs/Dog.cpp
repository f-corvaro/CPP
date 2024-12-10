/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:00:08 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:45:53 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

/**
 * @brief Default constructor for the Dog class.
 * Initializes the type to "Dog" and allocates a new Brain object.
 */
Dog::Dog() : brain(new Brain()) 
{
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

/**
 * @brief Copy constructor for the Dog class.
 * @param other The Dog object to copy from.
 */
Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "Dog copied" << std::endl;
}

/**
 * @brief Assignment operator for the Dog class.
 * @param other The Dog object to assign from.
 * @return A reference to the assigned Dog object.
 */
Dog& Dog::operator=(const Dog& other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

/**
 * @brief Destructor for the Dog class.
 * Deallocates the Brain object.
 */
Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

/**
 * @brief Makes a sound specific to the dog.
 * Prints "Woof!" to the standard output.
 */
void Dog::makeSound() const 
{
    std::cout << "Woof!" << std::endl;
}
