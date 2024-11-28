/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 20:51:01 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

/**
 * @brief Constructor that initializes the weapon with a type.
 * @param type The type of the weapon.
 */
Weapon::Weapon(const std::string& type) : type(type) {}

/**
 * @brief Gets the type of the weapon.
 * @return A const reference to the type of the weapon.
 */
const std::string& Weapon::getType() const 
{
    return type;
}

/**
 * @brief Sets the type of the weapon.
 * @param type The new type of the weapon.
 */
void Weapon::setType(const std::string& type) 
{
    this->type = type;
}
