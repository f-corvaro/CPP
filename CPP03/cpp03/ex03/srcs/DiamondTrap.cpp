/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:49:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:27:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**
 * @brief Constructs a new DiamondTrap object with the given name.
 * 
 * Initializes the DiamondTrap with:
 * - Hit points: 100 (from FragTrap)
 * - Energy points: 50 (from ScavTrap)
 * - Attack damage: 30 (from FragTrap)
 * 
 * @param name The name of the DiamondTrap.
 */
DiamondTrap::DiamondTrap(const std::string& name) 
            : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) 
{
    ClapTrap::hitPoints = FragTrap::hitPoints;
    ClapTrap::energyPoints = ScavTrap::energyPoints;
    ClapTrap::attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

/**
 * @brief Copy constructor for DiamondTrap.
 * 
 * @param other The DiamondTrap object to copy from.
 */
DiamondTrap::DiamondTrap(const DiamondTrap& other) 
            : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) 
{
    std::cout << "DiamondTrap " << name << " copied!" << std::endl;
}

/**
 * @brief Copy assignment operator for DiamondTrap.
 * 
 * @param other The DiamondTrap object to assign from.
 * @return DiamondTrap& A reference to the assigned DiamondTrap object.
 */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) 
{
    if (this != &other) 
    {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap " << name << " assigned!" << std::endl;
    return *this;
}

/**
 * @brief Destroys the DiamondTrap object.
 */
DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

/**
 * @brief Displays the name of the DiamondTrap and its ClapTrap name.
 */
void DiamondTrap::whoAmI() 
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
