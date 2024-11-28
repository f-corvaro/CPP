/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:19:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 18:30:26 by fcorvaro         ###   ########.fr       */
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
