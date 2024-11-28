/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:18:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:39:57 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

/**
 * @class Zombie
 * @brief A class representing a zombie.
 */
class Zombie 
{
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
	private:
		std::string name; ///< The name of the zombie.
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
