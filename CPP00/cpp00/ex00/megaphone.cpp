/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:30:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/11 15:49:35 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

/**
 * @brief Entry point of the megaphone program.
 *
 * This program takes command-line arguments and converts them to uppercase.
 * If no arguments are provided, it prints a default message.
 *
 * @param ac The number of command-line arguments.
 * @param av The array of command-line arguments.
 * @return int Returns 0 upon successful execution.
 */
int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		for (int i = 1; i < ac; ++i)
			for (int j = 0; av[i][j] != '\0'; ++j) 
				std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(av[i][j])));
		std::cout << std::endl;
	}
	return (0);
}
