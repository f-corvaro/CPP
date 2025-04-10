/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:33:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 19:03:10 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

/**
 * @class Intern
 * @brief Represents an intern capable of creating forms.
 *
 * The Intern class provides the ability to create specific types of forms based on
 * the form name provided. It uses the makeForm() function to dynamically allocate
 * and return a pointer to the requested form.
 */
class Intern {
    public:
        Intern(); // Default constructor
        Intern(const Intern& other); // Copy constructor
        Intern& operator=(const Intern& other); // Copy assignment operator
        ~Intern(); // Destructor

        AForm* makeForm(const std::string& formName, const std::string& target) const;
};

#endif
