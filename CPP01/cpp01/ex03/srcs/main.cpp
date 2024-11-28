/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 21:03:01 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/**
 * @brief Main function to demonstrate the use of HumanA and HumanB with weapons.
 * 
 * This function creates instances of Weapon, HumanA, and HumanB to demonstrate
 * how they interact. HumanA is always armed with a weapon passed by reference,
 * while HumanB may or may not have a weapon, set using a pointer.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    {
		// HumanA is always armed with a weapon passed by reference
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
		// HumanB may or may not have a weapon, set using a pointer
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
	// This design ensures that HumanA always has a valid weapon, 
	// while HumanB can dynamically manage whether it has a weapon or not.
    return 0;
}

// Using a pointer to Weapon is used when the object being pointed to may or may not exist.
// When you need to manage the lifetime of the object dynamically.
// When you need to reassign the pointer to point to different objects during its lifetime.
