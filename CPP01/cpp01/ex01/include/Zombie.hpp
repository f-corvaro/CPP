/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:18:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>

/**
 * @class Zombie
 * @brief A class representing a zombie.
 */
class Zombie 
{
	public:
		Zombie(std::string name);	// Constructor that takes a string
		Zombie();	///< Default constructor.
		~Zombie();	///< Destructor.
		void announce(void);
		void setName(std::string name);
	private:
		std::string name; ///< The name of the zombie.
};

Zombie* zombieHorde(int N, std::string name);

#endif
