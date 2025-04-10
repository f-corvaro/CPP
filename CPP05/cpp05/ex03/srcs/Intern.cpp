/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:33:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 19:08:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/**
 * @brief Creates a ShrubberyCreationForm.
 * 
 * This function dynamically allocates a new ShrubberyCreationForm object
 * with the specified target.
 * 
 * @param target The target for the ShrubberyCreationForm.
 * @return A pointer to the newly created ShrubberyCreationForm object.
 */
static AForm* createShrubberyCreationForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

/**
 * @brief Creates a RobotomyRequestForm.
 * 
 * This function dynamically allocates a new RobotomyRequestForm object
 * with the specified target.
 * 
 * @param target The target for the RobotomyRequestForm.
 * @return A pointer to the newly created RobotomyRequestForm object.
 */
static AForm* createRobotomyRequestForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

/**
 * @brief Creates a PresidentialPardonForm.
 * 
 * This function dynamically allocates a new PresidentialPardonForm object
 * with the specified target.
 * 
 * @param target The target for the PresidentialPardonForm.
 * @return A pointer to the newly created PresidentialPardonForm object.
 */
static AForm* createPresidentialPardonForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

/**
 * @brief Default constructor for Intern.
 */
Intern::Intern() {}

/**
 * @brief Copy constructor for Intern.
 * 
 * @param other The Intern object to copy.
 */
Intern::Intern(const Intern& other) {
    (void)other; // Intern has no attributes, so nothing to copy
}

/**
 * @brief Copy assignment operator for Intern.
 * 
 * @param other The Intern object to assign from.
 * @return Intern& Reference to the assigned object.
 */
Intern& Intern::operator=(const Intern& other) {
    (void)other; // Intern has no attributes, so nothing to assign
    return *this;
}

/**
 * @brief Destructor for Intern.
 */
Intern::~Intern() {}

/**
 * @brief Creates a form based on the provided name and target.
 * 
 * This function matches the form name to a specific form type and dynamically
 * allocates the corresponding form object. If the form name is invalid, it prints
 * an error message and returns NULL.
 * 
 * @param formName The name of the form to create.
 * @param target The target of the form.
 * @return A pointer to the created AForm object, or NULL if the form name is invalid.
 */
AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    // Array of form names and corresponding creation functions
    const std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*formCreators[])(const std::string&) = {
        &createShrubberyCreationForm,
        &createRobotomyRequestForm,
        &createPresidentialPardonForm
    };

    // Match the form name and create the corresponding form
    for (size_t i = 0; i < 3; ++i) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }

    // If no match is found, print an error message and return NULL
    std::cerr << "Error: Form name \"" << formName << "\" is invalid." << std::endl;
    return NULL;
}
