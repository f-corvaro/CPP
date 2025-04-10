/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:15:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:14:10 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

/**
 * @class PresidentialPardonForm
 * @brief Represents a specific type of form that grants a presidential pardon to a target.
 *
 * The PresidentialPardonForm class is derived from the AForm class and implements the behavior 
 * specific to a presidential pardon. It requires a target to be specified and can be executed 
 * by a Bureaucrat with the appropriate grade.
 */
class PresidentialPardonForm : public AForm 
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        virtual ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
