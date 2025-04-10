/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:20:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2025/04/01 15:28:27 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

/**
 * @brief Constructor for ShrubberyCreationForm.
 * 
 * Initializes the form with a target.
 * 
 * @param target The target for the form.
 */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

/**
 * @brief Executes the ShrubberyCreationForm.
 * 
 * Creates a file with ASCII trees in the specified target directory.
 * 
 * @param executor The Bureaucrat executing the form.
 * @throws GradeTooLowException if the executor's grade is too low.
 */
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor); // Check if the form can be executed

    // Convert target + "_shrubbery" (cpp-style) to a C-style string using .c_str()
    std::ofstream outFile((target + "_shrubbery").c_str());
    if (!outFile) {
        std::cerr << "Error: Failed to create file " << target + "_shrubbery" << std::endl;
        return; // Exit the function if the file cannot be created
    }

    outFile << "                                                         .\n";
    outFile << "                                              .         ;  \n";
    outFile << "                 .              .              ;%     ;;   \n";
    outFile << "                   ,           ,                :;%  %;   \n";
    outFile << "                    :         ;                   :;%;'     .,   \n";
    outFile << "           ,.        %;     %;            ;        %;'    ,;\n";
    outFile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    outFile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
    outFile << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    outFile << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    outFile << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    outFile << "                    `:%;.  :;bd%;          %;@%;'\n";
    outFile << "                      `@%:.  :;%.         ;@@%;'   \n";
    outFile << "                        `@%.  `;@%.      ;@@%;         \n";
    outFile << "                          `@%%. `@%%    ;@@%;        \n";
    outFile << "                            ;@%. :@%%  %@@%;       \n";
    outFile << "                              %@bd%%%bd%%:;     \n";
    outFile << "                                #@%%%%%:;;\n";
    outFile << "                                %@@%%%::;\n";
    outFile << "                                %@@@%(o);  . '         \n";
    outFile << "                                %@@@o%;:(.,'         \n";
    outFile << "                            `.. %@@@o%::;         \n";
    outFile << "                               `)@@@o%::;         \n";
    outFile << "                                %@@(o)::;        \n";
    outFile << "                               .%@@@@%::;         \n";
    outFile << "                               ;%@@@@%::;.          \n";
    outFile << "                              ;%@@@@%%:;;;. \n";
    outFile << "                          ...;%@@@@@%%:;;;;,..\n";

    outFile.close();
    std::cout << "Shrubbery created in " << target << "_shrubbery" << std::endl;
}

/**
 * @brief Destructor for ShrubberyCreationForm.
 */
ShrubberyCreationForm::~ShrubberyCreationForm() {}
