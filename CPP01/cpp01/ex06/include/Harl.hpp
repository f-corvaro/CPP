/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:04:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:41:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

/**
 * @class Harl
 * @brief A class that represents Harl and his various levels of complaints.
 * 
 * The Harl class contains methods for different levels of complaints: DEBUG, INFO, WARNING, and ERROR.
 * It also has a public method to complain based on the level passed as a parameter.
 */
class Harl 
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

#endif
