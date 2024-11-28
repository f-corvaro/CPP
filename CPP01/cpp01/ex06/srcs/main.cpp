/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:04:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/25 22:41:44 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <iostream>

/**
 * @brief Entry point of the program.
 * 
 * This function parses the command-line argument to get the log level,
 * creates an instance of the Harl class, and calls the complain method
 * with the provided log level.
 * 
 * @param ac The number of command-line arguments.
 * @param av The array of command-line arguments.
 * @return int Returns 1 if the number of arguments is incorrect, otherwise returns 0.
 */
int main(int ac, char **av)
{
    if (ac != 2) 
    {
        std::cerr << "Usage: " << av[0] << " <log level>\n";
        return 1;
    }

    Harl harl;
    harl.complain(av[1]);

    return 0;
}
