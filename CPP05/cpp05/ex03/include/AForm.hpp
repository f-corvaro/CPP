/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:14:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:20:26 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

/**
 * @class AForm
 * @brief Abstract base class representing a form that can be signed and executed by a Bureaucrat.
 *
 * The AForm class defines the basic structure and behavior of a form, including its name, 
 * signed status, and the grades required to sign and execute it. It also provides mechanisms 
 * for signing the form and executing it, with appropriate exception handling for invalid operations.
 *
 * @note This class is abstract and cannot be instantiated directly. Derived classes must implement 
 *       the pure virtual function `execute`.
 */
class AForm 
{
    private:
        const std::string name; ///< The name of the form (constant).
        bool isSigned; ///< Indicates whether the form is signed.
        const int gradeToSign; ///< The grade required to sign the form.
        const int gradeToExecute; ///< The grade required to execute the form.

        void validateGrade(int grade);

    public:
        /**
         * @class GradeTooHighException
         * @brief Exception thrown when a grade is too high.
         */
        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        /**
         * @class GradeTooLowException
         * @brief Exception thrown when a grade is too low.
         */
        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        /**
         * @class FormNotSignedException
         * @brief Exception thrown when attempting to execute an unsigned form.
         */
        class FormNotSignedException : public std::exception {
        public:
        
            virtual const char* what() const throw();
        };

        AForm(const std::string& name, int gradeToSign, int gradeToExecute); // Parameterized constructor
        AForm(const AForm& other); // Copy constructor
        AForm& operator=(const AForm& other); // Copy assignment operator
        virtual ~AForm(); // Destructor

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0; // Pure virtual function
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
