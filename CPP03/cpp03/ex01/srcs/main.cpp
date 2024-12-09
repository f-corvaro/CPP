/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 18:57:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/**
 * @brief Main function to demonstrate the functionality of the ScavTrap class.
 * 
 * Creates a ScavTrap object and performs a series of actions including attacking,
 * taking damage, repairing, and entering Gate keeper mode.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    ScavTrap scavtrap("MAM");

    // Perform some actions
    scavtrap.attack("Target1");
    scavtrap.takeDamage(33);
    scavtrap.beRepaired(35);
    
    // More actions
    scavtrap.attack("Target2");
    scavtrap.takeDamage(500);
    scavtrap.beRepaired(10);

    // Enter Gate keeper mode
    scavtrap.guardGate();

    return 0;
}
