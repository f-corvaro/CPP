/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:19:47 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/05 16:48:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

/**
 * @brief Default constructor.
 * 
 * Initializes the bureaucrat with a default name and grade of 150.
 */
Bureaucrat::Bureaucrat() : name(""), grade(150) {}

/**
 * @brief Parameterized constructor.
 * 
 * Initializes the bureaucrat with a given name and grade.
 * 
 * @param name The name of the bureaucrat.
 * @param grade The grade of the bureaucrat.
 * @throws GradeTooHighException if the grade is less than 1.
 * @throws GradeTooLowException if the grade is greater than 150.
 */
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) 
{
    validateGrade(grade);
    this->grade = grade;
}

/**
 * @brief Copy constructor.
 * 
 * Creates a copy of another Bureaucrat object.
 * 
 * @param other The Bureaucrat object to copy.
 */
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

/**
 * @brief Copy assignment operator.
 *  
 * Assigns the values of another Bureaucrat object to this one.
 *  
 * @param other The Bureaucrat object to assign from.
 * @return Bureaucrat& Reference to the assigned object.
 */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
    if (this != &other) {
        this->grade = other.grade;
    }
    return *this;
}

/**
 * @brief Destructor.
 * 
 * Cleans up the Bureaucrat object.
 */
Bureaucrat::~Bureaucrat() {}

/**
 * @brief Gets the name of the bureaucrat.
 * 
 * @return const std::string& The name of the bureaucrat.
 */
const std::string& Bureaucrat::getName() const 
{
    return name;
}

/**
 * @brief Gets the grade of the bureaucrat.
 * 
 * @return int The grade of the bureaucrat.
 */
int Bureaucrat::getGrade() const 
{
    return grade;
}

/**
 * @brief Increments the grade of the bureaucrat.
 * 
 * Decreases the grade by 1 (higher rank).
 * @throws GradeTooHighException if the grade becomes less than 1.
 */
void Bureaucrat::incrementGrade() 
{
    validateGrade(grade - 1);
    --grade;
}

/**
 * @brief Decrements the grade of the bureaucrat.
 * 
 * Increases the grade by 1 (lower rank).
 * @throws GradeTooLowException if the grade becomes greater than 150.
*/
void Bureaucrat::decrementGrade() 
{
    validateGrade(grade + 1);
    ++grade;
}

/**
 * @brief Validates the grade.
 * 
 * Ensures that the grade is within the valid range (1 to 150).
 * Throws an exception if the grade is invalid.
 * 
 * @param grade The grade to validate.
 * @throws GradeTooHighException if the grade is less than 1.
 * @throws GradeTooLowException if the grade is greater than 150.
 */
void Bureaucrat::validateGrade(int grade) 
{
    if (grade < 1) 
    {
        throw GradeTooHighException();
    }
    if (grade > 150) 
    {
        throw GradeTooLowException();
    }
}

/**
 * @class GradeTooHighException
 * @brief Exception thrown when the grade is too high.
 */
const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

/**
 * @class GradeTooLowException
 * @brief Exception thrown when the grade is too low.
 */
const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

/**
 * @brief Overloads the insertion operator for Bureaucrat.
 * 
 * Prints the bureaucrat's name and grade in the format:
 * "<name>, bureaucrat grade <grade>."
 * 
 * @param os The output stream.
 * @param bureaucrat The Bureaucrat object to print.
 * @return std::ostream& The output stream.
 */
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) 
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}

/**
 * @brief Attempts to sign a form.
 * 
 * This method calls the `AForm::beSigned()` method to attempt to sign the form.
 * If the signing is successful, it prints a success message. If the signing fails
 * (due to the bureaucrat's grade being too low), it catches the exception and
 * prints an error message with the reason.
 * 
 * @param form The form to be signed.
 */
void Bureaucrat::signForm(AForm& form) 
{
    try 
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

/**
 * @brief Attempts to execute a form.
 * 
 * This method calls the `AForm::execute()` method to attempt to execute the form.
 * If the execution is successful, it prints a success message. If the execution fails
 * (due to the bureaucrat's grade being too low), it catches the exception and
 * prints an error message with the reason.
 * 
 * @param form The form to be executed.
 */
void Bureaucrat::executeForm(const AForm& form) const
{
    try 
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
