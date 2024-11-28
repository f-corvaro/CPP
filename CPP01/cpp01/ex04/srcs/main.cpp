/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:08:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:41:00 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include "replace.hpp"

/**
 * @brief Entry point of the program.
 * 
 * This program takes three parameters: a filename and two strings, s1 and s2.
 * It opens the file <filename>, reads its content, and replaces every occurrence
 * of s1 with s2. The modified content is then written to a new file named <filename>.replace.
 * 
 * @param ac The number of command-line arguments.
 * @param av The array of command-line arguments.
 * @return int Returns 0 on success, 1 on error.
 * 
 * Usage: ./replace <filename> <string1> <string2>
 * 
 * Error Handling:
 * - If the number of arguments is not 4, it prints the usage message and returns 1.
 * - If the search string is empty, it prints an error message and returns 1.
 * - If the input file cannot be opened, it prints an error message and returns 1.
 * - If the output file cannot be created, it prints an error message and returns 1.
 */
int main(int ac, char *av[]) 
{
    if (ac != 4) 
	{
        std::cerr	<< "Usage: " << av[0] 
					<< " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty())
    {
        std::cerr << "Error: The search string cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) 
	{
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();
    inputFile.close();

    replaceOccurrences(content, s1, s2);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) 
	{
        std::cerr	<< "Error: Could not create output file " 
					<< filename << ".replace" << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    return 0;
}
