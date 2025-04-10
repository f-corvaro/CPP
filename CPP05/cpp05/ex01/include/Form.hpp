/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:14:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/03/27 13:51:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

/**
 * @class Form
 * @brief Represents a form with a name, sign status, and grade requirements.
 * 
 * The Form class models a form that can be signed by a Bureaucrat if their grade
 * meets the required criteria. It includes exception handling for invalid grades.
 */
class Form 
{
    private:
        const std::string name; ///< The name of the form (constant).
        bool isSigned; ///< Indicates whether the form is signed.
        const int gradeToSign; ///< The grade required to sign the form.
        const int gradeToExecute; ///< The grade required to execute the form.

        void validateGrade(int grade);

    public:
        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };
        
        Form(const std::string& name, int gradeToSign, int gradeToExecute); //Parameterized constructor
        Form(const Form& other); //Copy constructor
        Form& operator=(const Form& other); //Copy assignment operator
        ~Form(); //Destructor

        // Getters
        
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        // Member Functions
        
        void beSigned(const Bureaucrat& bureaucrat);
};

// Overload of the insertion operator for Form
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
