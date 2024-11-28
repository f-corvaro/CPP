/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:25 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:36 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

/**
 * @class HumanB
 * @brief A class representing a human that may or may not have a weapon.
 */
class HumanB 
{
    private:
        std::string name;   ///< The name of the human
        Weapon* weapon;    ///< Pointer to the weapon the human has
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif
