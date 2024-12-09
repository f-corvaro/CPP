/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:45:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:15:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/**
 * @brief Constructs a new FragTrap object with the given name.
 * 
 * Initializes the FragTrap with:
 * - Hit points: 100
 * - Energy points: 100
 * - Attack damage: 30
 * 
 * @param name The name of the FragTrap.
 */
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

/**
 * @brief Copy constructor for FragTrap.
 * 
 * @param other The FragTrap object to copy from.
 */
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << name << " copied!" << std::endl;
}

/**
 * @brief Copy assignment operator for FragTrap.
 * 
 * @param other The FragTrap object to assign from.
 * @return FragTrap& A reference to the assigned FragTrap object.
 */
FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    if (this != &other) 
        ClapTrap::operator=(other);
    std::cout << "FragTrap " << name << " assigned!" << std::endl;
    return *this;
}

/**
 * @brief Destroys the FragTrap object.
 */
FragTrap::~FragTrap() 
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

/**
 * @brief Attacks the given target, causing damage.
 * 
 * Attacking costs 1 energy point.
 * 
 * @param target The target to attack.
 */
void FragTrap::attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints > 0) 
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } 
    else 
        std::cout << "FragTrap " << name << " has no energy or hit points left to attack!" << std::endl;
}

/**
 * @brief Requests a high five.
 * 
 * This function prints a message indicating that the FragTrap is requesting a high five.
 */
void FragTrap::highFivesGuys() 
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
