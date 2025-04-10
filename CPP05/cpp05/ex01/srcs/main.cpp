/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/03/27 14:04:40 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

/**
 * @brief Main function to test the Bureaucrat and Form classes.
 * 
 * This function creates instances of Bureaucrat and Form, tests signing forms
 * with valid and invalid grades, and handles exceptions thrown during the process.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() {
    try {
        // Create Bureaucrats
        Bureaucrat highRank("Franco 4 C.", 1); // Highest rank
        std::cout << highRank << std::endl;
        
        Bureaucrat midRank("Franco 2 C.", 75);  // Mid rank
        std::cout << midRank << std::endl;
        
        Bureaucrat lowRank("Franco 0 C.", 150); // Lowest rank
        std::cout << lowRank << std::endl;

        // Create Forms
        Form easyForm("ISEE", 100, 50); // Requires grade 100 to sign
        Form hardForm("730", 50, 25);  // Requires grade 50 to sign
        
        // Test signing forms
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;

        // Low-rank bureaucrat tries to sign both forms
        lowRank.signForm(easyForm); // Should fail
        lowRank.signForm(hardForm); // Should fail
        
        // Print final form statuses
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;

        // Mid-rank bureaucrat tries to sign both forms
        midRank.signForm(easyForm); // Should succeed
        midRank.signForm(hardForm); // Should fail

        // Print final form statuses
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;

        // High-rank bureaucrat signs both forms
        highRank.signForm(easyForm); // Should succeed
        highRank.signForm(hardForm); // Should succeed
        
        // Print final form statuses
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;        
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Form impForm("TARI", 151, 25);  // Error
        
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Form impoForm("IMU", 0, 24); // Error
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
