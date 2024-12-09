/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:50:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 20:44:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

/**
 * @class ClapTrap
 * @brief A class representing a ClapTrap robot.
 *
 * The ClapTrap class represents a robot with a name, hit points, energy points, 
 * and attack damage.
 * It can attack targets, take damage, and repair itself.
 */
class ClapTrap 
{
    protected:
        std::string name;   ///< The name of the ClapTrap
        int hitPoints;      ///< The hit points of the ClapTrap
        int energyPoints;   ///< The energy points of the ClapTrap
        int attackDamage;     ///< The attack damage of the ClapTrap

    public:
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        virtual ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
