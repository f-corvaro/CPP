/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:04:39 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/26 11:28:11 by fcorvaro         ###   ########.fr       */
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
    std::cout	<< "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" 
				<< std::endl;
}

/**
 * @brief Prints an info message.
 * 
 * This method prints an info message containing extensive information.
 */
void Harl::info(void) 
{
    std::cout	<< "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
				<< std::endl;
}

/**
 * @brief Prints a warning message.
 * 
 * This method prints a warning message indicating a potential issue.
 */
void Harl::warning(void) 
{
    std::cout	<< "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" 
				<< std::endl;
}

/**
 * @brief Prints an error message.
 * 
 * This method prints an error message indicating an unrecoverable error.
 */
void Harl::error(void) {
    std::cout	<< "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" 
				<< std::endl;
}

/**
 * @brief Handles complaints based on the provided log level.
 * 
 * This method takes a log level as a parameter and prints messages
 * corresponding to that level and all higher levels. If the log level
 * is not recognized, it prints a default message.
 * 
 * @param level The log level as a string. Valid levels are "DEBUG", "INFO", "WARNING", and "ERROR".
 */
void Harl::complain(std::string level) 
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    int levelIndex = -1;
    for (int i = 0; i < 4; i++) 
    {
        if (levels[i] == level) 
        {
            levelIndex = i;
            break;
        }
    }
    switch (levelIndex) 
    {
        case 0:
            this->debug();
			this->info();
			this->warning();
			this->error();
            break;
        case 1:
            this->info();
			this->warning();
			this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
