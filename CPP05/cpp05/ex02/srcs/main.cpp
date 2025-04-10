/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 14:58:11 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/**
 * @brief Main function to test the Bureaucrat and Form classes.
 * 
 * This function creates Bureaucrats and Forms, demonstrating signing and executing forms
 * under various conditions, including edge cases such as invalid grades and unsigned forms.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() 
{
    try {
        // Bureaucrat with the highest rank
        Bureaucrat highRank("Dj Sbu", 1);
        std::cout << highRank << std::endl;

        // Bureaucrat with the lowest rank
        Bureaucrat lowRank("Franco 4 C", 150);
        std::cout << lowRank << std::endl;

        // Forms Creation
        ShrubberyCreationForm shrubberyForm("Garden");
        RobotomyRequestForm robotomyForm("Bender");
        PresidentialPardonForm pardonForm("Magnarino");
        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        // Edge case: Low-rank bureaucrat trying to sign forms
        try {
            lowRank.signForm(shrubberyForm);
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Edge case: High-rank bureaucrat signing forms
        highRank.signForm(shrubberyForm);
        highRank.signForm(robotomyForm);
        highRank.signForm(pardonForm);

        // Edge case: Low-rank bureaucrat trying to execute forms
        try {
            lowRank.executeForm(shrubberyForm);
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Edge case: High-rank bureaucrat executing forms
        highRank.executeForm(shrubberyForm);
        highRank.executeForm(robotomyForm);
        highRank.executeForm(pardonForm);

        // Edge case: Attempting to execute an unsigned form
        ShrubberyCreationForm unsignedForm("Garden");
        try {
            highRank.executeForm(unsignedForm);
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Edge case: Invalid bureaucrat grade
        try {
            Bureaucrat invalidBureaucrat("Invalid", 0); // Grade too high
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        // Edge case: Invalid bureaucrat grade
        try {
            Bureaucrat invalidBureaucrat("Invalid", 151); // Grade too low
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    } 
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
