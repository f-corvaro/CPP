/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:27:08 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 18:11:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a new zombie on the heap, names it, and returns a pointer to it.
 * 
 * @param name The name of the zombie.
 * @return Zombie* Pointer to the newly created zombie.
 */
Zombie* newZombie(std::string name) 
{
    return new Zombie(name);
}
