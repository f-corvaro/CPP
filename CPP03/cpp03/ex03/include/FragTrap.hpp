/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:44:48 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/08 21:15:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

/**
 * @class FragTrap
 * @brief A class representing a FragTrap robot, derived from ClapTrap.
 *
 * The FragTrap class inherits from ClapTrap and has additional functionality.
 */
class FragTrap : virtual public ClapTrap 
{
    public:
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys();
};

#endif
