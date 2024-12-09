/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:13:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

/**
 * @brief Constructs a new ClapTrap object with the given name.
 * 
 * Initializes the ClapTrap with:
 * - Hit points: 10
 * - Energy points: 10
 * - Attack damage: 0
 * 
 * @param name The name of the ClapTrap.
 */
ClapTrap::ClapTrap(const std::string& name)
        : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

/**
 * @brief Copy constructor for ClapTrap.
 * 
 * @param other The ClapTrap object to copy from.
 */
ClapTrap::ClapTrap(const ClapTrap& other)
        : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) 
{
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

/**
 * @brief Copy assignment operator for ClapTrap.
 * 
 * @param other The ClapTrap object to assign from.
 * @return ClapTrap& A reference to the assigned ClapTrap object.
 */
ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other) 
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}

/**
 * @brief Destroys the ClapTrap object.
 */
ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

/**
 * @brief Attacks the given target, causing damage.
 * 
 * Attacking costs 1 energy point.
 * 
 * @param target The target to attack.
 */
void ClapTrap::attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints > 0) 
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}

/**
 * @brief Takes the given amount of damage.
 * 
 * @param amount The amount of damage to take.
 */
void ClapTrap::takeDamage(unsigned int amount) 
{
    hitPoints -= amount;
    if (hitPoints < 0) 
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Current hit points: " << hitPoints << std::endl;
}

/**
 * @brief Repairs the ClapTrap by the given amount.
 * 
 * Repairing costs 1 energy point.
 * 
 * @param amount The amount of hit points to repair.
 */
void ClapTrap::beRepaired(unsigned int amount) 
{
    if (hitPoints > 0 && energyPoints > 0) 
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! Current hit points: " << hitPoints << std::endl;
    } 
    else 
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
}
