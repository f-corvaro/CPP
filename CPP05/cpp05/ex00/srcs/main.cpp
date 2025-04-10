/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/05 15:00:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @brief Entry point for testing the Bureaucrat class.
 * 
 * This file contains various test cases to validate the functionality of the
 * Bureaucrat class, including grade validation, incrementing and decrementing
 * grades, and exception handling.
 */

#include <iostream>
#include "Bureaucrat.hpp"

/**
 * @brief Main function to test the Bureaucrat class.
 * 
 * This function creates instances of the Bureaucrat class with valid and invalid
 * grades, tests grade increment and decrement functionality, and handles exceptions
 * thrown by invalid operations.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() 
{
    // Test case: Valid Bureaucrat creation and grade manipulation
    try 
    {
        Bureaucrat bureaucrat("Franco 4C", 50);
        std::cout << bureaucrat << std::endl;

        // Increment grade (should succeed)
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        // Decrement grade (should succeed)
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    // Attempt to create a Bureaucrat with an invalid grade (should throw an exception)
    try 
    {
        Bureaucrat invalidBureaucrat("Invalid Test", 151); 
    }
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test case: Grade too high (0 is invalid)
    try 
    {
        Bureaucrat zeroGrade("Zero Grade", 0); 
    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test case: Negative grade (invalid)
    try 
    {
        Bureaucrat negativeGrade("Negative Grade", -10); 
    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    // Test case: Incrementing grade beyond the upper limit (1 is the highest grade)
    try 
    {
        Bureaucrat highEdgeCase("High Edge Case", 1);
        std::cout << highEdgeCase << std::endl;

        // Increment grade (should throw an exception)
        highEdgeCase.incrementGrade();
    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test case: Decrementing grade beyond the lower limit (150 is the lowest grade)
    try 
    {
        Bureaucrat lowEdgeCase("Low Edge Case", 150);
        std::cout << lowEdgeCase << std::endl;

        // Decrement grade (should throw an exception)
        lowEdgeCase.decrementGrade();
    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return (0);
}
