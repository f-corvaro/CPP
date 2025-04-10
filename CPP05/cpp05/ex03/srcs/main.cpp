/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 19:19:37 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/**
 * @brief Entry point of the program.
 * 
 * This function demonstrates the functionality of the Intern, Bureaucrat, and AForm classes.
 * It creates an Intern who generates various forms, which are then signed and executed by a Bureaucrat.
 * The program also handles invalid form creation and demonstrates exception handling.
 * 
 * @return int Returns 0 if the program executes successfully.
 */
int main() 
{
    Intern anIntern;
    AForm* form;

    try 
    {
        Bureaucrat bob("Bob", 50);
        std::cout << bob << std::endl;

        // Create a RobotomyRequestForm
        form = anIntern.makeForm("robotomy request", "Bender");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form); // Bob signs the form
            bob.executeForm(*form); // Bob executes the form
            delete form; // Clean up dynamically allocated memory
        }

        // Create a ShrubberyCreationForm
        form = anIntern.makeForm("shrubbery creation", "Garden");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form); 
            bob.executeForm(*form); 
            delete form;
        }

        // Create a PresidentialPardonForm
        form = anIntern.makeForm("presidential pardon", "Franco 4 C");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form); 
            bob.executeForm(*form); 
            delete form;
        }

        // Attempt to create an invalid form
        form = anIntern.makeForm("invalid form", "Target");
        if (!form) {
            std::cerr << "Failed to create form." << std::endl;
        }
        
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
