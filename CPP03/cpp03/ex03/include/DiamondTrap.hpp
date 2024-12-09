/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:49:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:25:04 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

/**
 * @class DiamondTrap
 * @brief A class representing a DiamondTrap robot, derived from both FragTrap and ScavTrap.
 *
 * The DiamondTrap class inherits from both FragTrap and ScavTrap and has additional functionality.
 */
class DiamondTrap : public FragTrap, public ScavTrap 
{
    private:
        std::string name; ///< The name of the DiamondTrap

    public:
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();

        using ScavTrap::attack;
        void whoAmI();
};

#endif
