/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:04:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:41:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <iostream>

/**
 * @brief Entry point of the program.
 * 
 * This program creates an instance of the Harl class and takes a complaint level from the user.
 * It then calls the complain method of the Harl instance with the provided level.
 * The program continues to run until the user types "end" or presses Ctrl+D.
 * 
 * @return int Returns 0 on success.
 */
int main() 
{
	Harl harl;
	std::string level;
	
    while (true) 
    {
        std::cout << "Enter complaint level (DEBUG, INFO, WARNING, ERROR) or 'end' to quit: ";
		if (!std::getline(std::cin, level)) 
        {
            std::cout << std::endl; 
            break;
        }

        if (level == "end") 
        {
            break;
        }

        harl.complain(level);
    }

    return 0;
}
