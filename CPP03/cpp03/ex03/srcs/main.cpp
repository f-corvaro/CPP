/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:30:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

/**
 * @brief Main function to demonstrate the functionality of the ClapTrap, ScavTrap, FragTrap, and DiamondTrap classes.
 *
 * Creates ClapTrap, ScavTrap, FragTrap, and DiamondTrap objects and performs a series of actions including attacking,
 * taking damage, repairing, and using special abilities.
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    DiamondTrap diamondtrap("TRMFLD");

    // Actions
    diamondtrap.attack("Target1");
    diamondtrap.takeDamage(20);
    diamondtrap.beRepaired(10);

    // More Actions
    diamondtrap.attack("Target2");
    diamondtrap.takeDamage(700);
    diamondtrap.beRepaired(40);

    // Special Ability
    diamondtrap.whoAmI();

    return 0;
}
