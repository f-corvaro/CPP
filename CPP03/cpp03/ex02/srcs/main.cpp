/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:02:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/**
 * @brief Main function to demonstrate the functionality of the FragTrap classes.
 * 
 * Creates FragTrap object and performs a series of actions including attacking,
 * taking damage, repairing, and using special abilities.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    FragTrap fragtrap("AIE");

    // Actions
    fragtrap.attack("Target1");
    fragtrap.takeDamage(42);
    fragtrap.beRepaired(21);
    
    // More actions
    fragtrap.attack("Target2");
    fragtrap.takeDamage(600);
    fragtrap.beRepaired(20);

    // Special ability
    fragtrap.highFivesGuys();

    return 0;
}
