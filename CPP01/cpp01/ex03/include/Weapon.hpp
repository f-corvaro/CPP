/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:38 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

/**
 * @class Weapon
 * @brief A class representing a weapon with a type.
 */
class Weapon 
{
	private:
   		std::string type; ///< The type of the weapon
	public:
    	Weapon(const std::string& type);
    	const std::string& getType() const;
    	void setType(const std::string& type);
};

#endif
