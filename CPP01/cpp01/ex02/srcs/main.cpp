/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:12:29 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main() 
{
	// Initialize the string variable
	std::string str = "HI THIS IS BRAIN";

	// Pointer to the string
	std::string* stringPTR = &str;

	// Reference to the string
	std::string& stringREF = str;

	// Print the value of the string
	std::cout	<< "Value of the string variable: " 
				<< str << std::endl;
	// Print the memory address of the string
	std::cout	<< "Memory address of the string variable: " 
				<< &str << std::endl;
	
	// Print the value and the memory address of the pointer
	std::cout	<< "Value pointed to by stringPTR: " 
				<< *stringPTR << std::endl;
    std::cout	<< "Memory address held by stringPTR: "
				<< stringPTR << std::endl;

	// Print the value and the memory address of the reference
    std::cout	<< "Value pointed to by stringREF: "
				<< stringREF << std::endl;
	std::cout	<< "Memory address held by stringREF: " 
				<< &stringREF << std::endl;
    

	// The memory addresses are the same because both the pointer and the reference refer to the same string variable.
	
    return 0;
}
