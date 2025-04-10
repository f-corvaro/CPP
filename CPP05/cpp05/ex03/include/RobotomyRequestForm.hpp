/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:13:59 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:14:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @class RobotomyRequestForm
 * @brief Represents a specific type of form that requests the robotomization of a target.
 *
 * The RobotomyRequestForm class is derived from the AForm class and implements the behavior 
 * specific to a robotomy request. It requires a target to be specified and can be executed 
 * by a Bureaucrat with the appropriate grade. The execution simulates a robotomy process 
 * with a 50% success rate.
 */
class RobotomyRequestForm : public AForm 
{
    private:
        std::string target;

    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif
