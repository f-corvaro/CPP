/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:38:09 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 20:50:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * @brief Constructs a new ScavTrap object with the given name.
 * 
 * Initializes the ScavTrap with:
 * - Hit points: 100
 * - Energy points: 50
 * - Attack damage: 20
 * 
 * @param name The name of the ScavTrap.
 */
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

/**
 * @brief Copy constructor for ScavTrap.
 * 
 * @param other The ScavTrap object to copy from.
 */
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << name << " copied!" << std::endl;
}

/**
 * @brief Copy assignment operator for ScavTrap.
 * 
 * @param other The ScavTrap object to assign from.
 * @return ScavTrap& A reference to the assigned ScavTrap object.
 */
ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other) 
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << name << " assigned!" << std::endl;
    return *this;
}

/**
 * @brief Destroys the ScavTrap object.
 */
ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

/**
 * @brief Attacks the given target, causing damage.
 * 
 * Attacking costs 1 energy point.
 * 
 * @param target The target to attack.
 */
void ScavTrap::attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints > 0) 
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}

/**
 * @brief Puts the ScavTrap in Gate keeper mode.
 * 
 * This function prints a message indicating that the ScavTrap is now in Gate keeper mode.
 */
void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
