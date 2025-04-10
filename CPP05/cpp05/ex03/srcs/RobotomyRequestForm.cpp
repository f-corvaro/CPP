/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:50 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:25:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief Constructor for RobotomyRequestForm.
 * 
 * Initializes the form with a target.
 * 
 * @param target The target for the robotomy request.
 */
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {}

/**
 * @brief Executes the robotomy request form.
 * 
 * Simulates a robotomy process with a 50% success rate.
 * 
 * @param executor The bureaucrat executing the form.
 * @throws GradeTooLowException if the bureaucrat's grade is too low to execute the form.
 */
void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    std::cout << "Drilling noises..." << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2 == 0) {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << target << " robotomy failed." << std::endl;
    }
}

/**
 * @brief Destructor for RobotomyRequestForm.
 */
RobotomyRequestForm::~RobotomyRequestForm() {
}
