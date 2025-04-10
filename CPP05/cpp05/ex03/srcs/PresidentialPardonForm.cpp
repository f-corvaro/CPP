/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:14:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:25:25 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

/**
 * @brief Constructor for PresidentialPardonForm.
 * 
 * Initializes the form with a target name.
 * 
 * @param target The target of the presidential pardon.
 */
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential Pardon Form", 25, 5), target(target) {}

/**
 * @brief Executes the presidential pardon form.
 * 
 * Informs that the target has been pardoned if the form is signed and the bureaucrat's grade is sufficient.
 * 
 * @param executor The bureaucrat executing the form.
 * @throws GradeTooLowException if the bureaucrat's grade is too low to execute the form.
 */
void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned()) {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > getGradeToExecute()) {
        throw GradeTooLowException();
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/**
 * @brief Destructor for PresidentialPardonForm.
 */
PresidentialPardonForm::~PresidentialPardonForm() {}
