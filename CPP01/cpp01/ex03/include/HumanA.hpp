/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:22 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

/**
 * @class HumanA
 * @brief A class representing a human that always has a weapon.
 */
class HumanA 
{
	private:
		std::string name;	///< The name of the human
		Weapon& weapon; 	///< Reference to the weapon the human has
	public:
		HumanA(const std::string& name, Weapon& weapon);
		void attack() const;
};

#endif
