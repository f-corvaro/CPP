/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:04:39 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:41:13 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <iostream>

/**
 * @brief Prints a debug message.
 * 
 * This method prints a debug message containing contextual information.
 */
void Harl::debug(void) 
{
    std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
				<< std::endl;
}

/**
 * @brief Prints an info message.
 * 
 * This method prints an info message containing extensive information.
 */
void Harl::info(void) 
{
    std::cout	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

/**
 * @brief Prints a warning message.
 * 
 * This method prints a warning message indicating a potential issue.
 */
void Harl::warning(void) 
{
    std::cout	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
				<< std::endl;
}

/**
 * @brief Prints an error message.
 * 
 * This method prints an error message indicating an unrecoverable error.
 */
void Harl::error(void) {
    std::cout	<< "This is unacceptable! I want to speak to the manager now." 
				<< std::endl;
}

/**
 * @brief Complains at a certain level.
 * 
 * This method calls the appropriate method based on the level passed as a parameter.
 * 
 * @param level The level of the complaint.
 */
void Harl::complain(std::string level) 
{
    void (Harl::*complaints[])(void) = { &Harl::debug, &Harl::info, 
        &Harl::warning, &Harl::error};

    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) 
	{
        if (levels[i] == level) 
		{
            (this->*complaints[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
