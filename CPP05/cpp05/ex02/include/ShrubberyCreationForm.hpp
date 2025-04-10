/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:21 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:14:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

/**
 * @class ShrubberyCreationForm
 * @brief Represents a specific type of form that creates a shrubbery ASCII art file for a target.
 *
 * The ShrubberyCreationForm class is derived from the AForm class and implements the behavior 
 * specific to creating a shrubbery. It requires a target to be specified and can be executed 
 * by a Bureaucrat with the appropriate grade. The execution generates a file containing ASCII 
 * art of a shrubbery.
 */
class ShrubberyCreationForm : public AForm 
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
