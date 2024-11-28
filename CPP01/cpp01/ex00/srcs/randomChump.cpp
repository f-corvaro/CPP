/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:27:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 18:16:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/**
 * @brief Creates a zombie on the stack, names it, and makes it announce itself.
 * 
 * @param name The name of the zombie.
 */
void randomChump(std::string name) 
{
    Zombie zombie(name); // Stack allocation
    zombie.announce();
    // stackZombie is automatically destroyed when the function exits
}
