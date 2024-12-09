/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 19:02:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Main function to demonstrate the functionality of the ClapTrap class.
 * 
 * Creates a ClapTrap object and performs a series of actions including attacking,
 * taking damage, and repairing.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    ClapTrap claptrap("SDC");

    // Perform some actions
    claptrap.attack("Target1");
    claptrap.takeDamage(4);
    claptrap.beRepaired(2);

    // More actions
    claptrap.attack("Target2");
    claptrap.takeDamage(100);
    claptrap.beRepaired(5);
    
    return 0;
}
