/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:37:47 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:16:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/**
 * @class ScavTrap
 * @brief A class representing a ScavTrap robot, derived from ClapTrap.
 *
 * The ScavTrap class inherits from ClapTrap and has additional functionality.
 */
class ScavTrap : virtual public ClapTrap 
{
    public:
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif
