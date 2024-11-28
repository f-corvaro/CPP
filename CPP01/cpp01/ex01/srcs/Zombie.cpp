/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:19:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 18:54:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

/**
 * @brief Constructs a new Zombie object with the given name.
 * 
 * @param name The name of the zombie.
 */
Zombie::Zombie(std::string name) : name(name) {}

/**
 * @brief Default constructor for the Zombie class.
 *
 * This constructor initializes a Zombie object with an empty name.
 */
Zombie::Zombie() : name("") {}

/**
 * @brief Destroys the Zombie object and announces its destruction.
 */
Zombie::~Zombie()
{
    std::cout   << name << " is destroyed" 
                << std::endl;
}

/**
 * @brief Announces the zombie's presence.
 */
void Zombie::announce(void)
{
    std::cout   << name << ": BraiiiiiiinnnzzzZ..." 
                << std::endl;
}

/**
 * @brief Sets the name of the Zombie.
 * 
 * @param name The name to be assigned to the Zombie.
 */
void Zombie::setName(std::string name) 
{
    this->name = name;
}
