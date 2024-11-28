/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:42 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include <iostream>

/**
 * @brief Constructor that initializes the human with a name and a weapon.
 * @param name The name of the human.
 * @param weapon The weapon the human has.
 */
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

/**
 * @brief Displays an attack message with the human's name and weapon type.
 */
void HumanA::attack() const 
{
    std::cout	<< name << " attacks with their " << weapon.getType() 
				<< std::endl;
}
