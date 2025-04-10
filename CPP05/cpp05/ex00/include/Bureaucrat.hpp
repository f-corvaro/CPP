/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/03/27 12:03:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

/**
 * @class Bureaucrat
 * @brief Represents a bureaucrat with a name and a grade.
 * 
 * The Bureaucrat class models a bureaucrat with a constant name and a grade
 * that ranges from 1 (highest) to 150 (lowest). It provides functionality
 * to increment and decrement the grade, with exceptions thrown for invalid
 * grades.
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
            // Returns an error message for a too-high grade.
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            // Returns an error message for a too-high grade.
            virtual const char* what() const throw();
        };

        Bureaucrat(); //Constructor
        Bureaucrat(const std::string& name, int grade); //Parameterized constructor
        Bureaucrat(const Bureaucrat& other); //Copy constructor
        Bureaucrat& operator=(const Bureaucrat& other); //Copy assignment operator
        ~Bureaucrat(); //Destructor

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
