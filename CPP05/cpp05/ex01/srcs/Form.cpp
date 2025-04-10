/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:14:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/03/27 13:48:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

/**
 * @brief Constructor for Form.
 * 
 * Initializes the form with a name, grade requirements, and sets it as unsigned.
 * 
 * @param name The name of the form.
 * @param gradeToSign The grade required to sign the form.
 * @param gradeToExecute The grade required to execute the form.
 * @throws GradeTooHighException if any grade is less than 1.
 * @throws GradeTooLowException if any grade is greater than 150.
 */
Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    validateGrade(gradeToSign);
    validateGrade(gradeToExecute);
}

/**
 * @brief Copy constructor for Form.
 * 
 * Creates a copy of another Form object.
 * 
 * @param other The Form object to copy.
 */
Form::Form(const Form& other)
    : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

/**
 * @brief Copy assignment operator for Form.
 * 
 * Assigns the values of another Form object to this one.
 * 
 * @param other The Form object to assign from.
 * @return Form& Reference to the assigned object.
 */
Form& Form::operator=(const Form& other) {
    if (this != &other) {
        this->isSigned = other.isSigned;
    }
    return *this;
}

/**
 * @brief Destructor for Form.
 */
Form::~Form() {}

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
void Form::validateGrade(int grade) 
{
    if (grade < 1) {
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
}

/**
 * @brief Gets the name of the form.
 * 
 * @return const std::string& The name of the form.
 */
const std::string& Form::getName() const {
    return name;
}

/**
 * @brief Gets the sign status of the form.
 * 
 * @return bool True if the form is signed, false otherwise.
 */
bool Form::getIsSigned() const {
    return isSigned;
}

/**
 * @brief Gets the grade required to sign the form.
 * 
 * @return int The grade required to sign the form.
 */
int Form::getGradeToSign() const {
    return gradeToSign;
}

/**
 * @brief Gets the grade required to execute the form.
 * 
 * @return int The grade required to execute the form.
 */
int Form::getGradeToExecute() const {
    return gradeToExecute;
}

/**
 * @brief Signs the form if the bureaucrat's grade is high enough.
 * 
 * @param bureaucrat The Bureaucrat attempting to sign the form.
 * @throws GradeTooLowException if the bureaucrat's grade is too low.
 */
void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign) {
        throw GradeTooLowException();
    }
    isSigned = true;
}

/**
 * @brief Exception message for GradeTooHighException.
 * 
 * @return const char* Error message.
 */
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

/**
 * @brief Exception message for GradeTooLowException.
 * 
 * @return const char* Error message.
 */
const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

/**
 * @brief Overloads the insertion operator for Form.
 * 
 * Prints the form's details in the format:
 * "<name>, form signed: <isSigned>, grade to sign: <gradeToSign>, grade to execute: <gradeToExecute>."
 * 
 * @param os The output stream.
 * @param form The Form object to print.
 * @return std::ostream& The output stream.
 */
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << form.getName() << ", form signed: " << (form.getIsSigned() ? "yes" : "no")
       << ", grade to sign: " << form.getGradeToSign()
       << ", grade to execute: " << form.getGradeToExecute() << ".";
    return os;
}
