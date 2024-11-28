/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:45 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/**
 * @brief Constructor that initializes the human with a name.
 * @param name The name of the human.
 */
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

/**
 * @brief Sets the weapon for the human.
 * @param weapon The weapon to be set.
 */
void HumanB::setWeapon(Weapon& weapon) 
{
    this->weapon = &weapon;
}

/**
 * @brief Displays an attack message with the human's name and weapon type.
 */
void HumanB::attack() const 
{
    if (weapon) 
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else 
        std::cout << name << " has no weapon to attack with" << std::endl;
}
