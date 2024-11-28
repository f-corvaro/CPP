/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:46:11 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/27 19:14:27 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/**
 * @brief Creates a horde of Zombies with the given name.
 * 
 * This function allocates an array of Zombie objects on the heap and 
 * sets their names to the provided name. 
 * The number of Zombies in the horde is specified by the parameter N.
 * 
 * @param N The number of Zombies to create in the horde. Must be greater than 0.
 * @param name The name to assign to each Zombie in the horde.
 * @return A pointer to the first Zombie in the horde, or NULL if N is less than or equal to 0.
 */
Zombie* zombieHorde(int N, std::string name) 
{
    if (N <= 0) 
        return NULL;
        
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
    {
        std::ostringstream oss;
        oss << name << "_" << i;
        horde[i].setName(oss.str());
    }
    return horde;
}
