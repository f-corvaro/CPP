/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:12:30 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

/**
 * @class Bureaucrat
 * @brief Represents a bureaucrat with a name and a grade, capable of signing and executing forms.
 *
 * The Bureaucrat class manages a bureaucrat's grade and provides functionality to increment or 
 * decrement the grade, as well as to sign and execute forms. It includes exception handling for 
 * invalid grade operations.
 */
class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
        
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

        Bureaucrat(); // Default constructor
        Bureaucrat(const std::string& name, int grade); // Parameterized constructor
        Bureaucrat(const Bureaucrat& other); // Copy constructor
        Bureaucrat& operator=(const Bureaucrat& other); // Copy assignment operator
        ~Bureaucrat(); // Destructor

        const std::string& getName() const; // Get the bureaucrat's name
        int getGrade() const; // Get the bureaucrat's grade

        void incrementGrade();
        void decrementGrade(); 
        void signForm(AForm& form); 
        void executeForm(const AForm& form); 
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
