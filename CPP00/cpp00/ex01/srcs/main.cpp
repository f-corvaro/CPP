/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:36 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:39:15 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <iostream>
# include <limits>

int main(void) 
{
    PhoneBook phoneBook;
    std::string command;

    while (true) 
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) 
        {
            std::cout << "\nEOF detected. Exiting program." << std::endl;
            break;
        }

        if (command == "ADD") 
        {
            Contact contact;
            std::string input;

            do 
            {
                std::cout << "Enter first name: ";
                if (!std::getline(std::cin, input)) 
                {
                std::cout << "\nEOF detected. Exiting program." << std::endl;
                return (0);
                }
                if (input.empty())
                    std::cout << "First name cannot be empty. Please enter a valid first name." << std::endl;
            } 
            while (input.empty());
            contact.setFirstName(input);

            do 
            {
                std::cout << "Enter last name: ";
                if (!std::getline(std::cin, input)) 
                {
                std::cout << "\nEOF detected. Exiting program." << std::endl;
                return (0);
                }
                if (input.empty())
                    std::cout << "Last name cannot be empty. Please enter a valid last name." << std::endl;
            }
            while (input.empty());
            contact.setLastName(input);

            do 
            {
                std::cout << "Enter nickname: ";
                if (!std::getline(std::cin, input)) 
                {
                std::cout << "\nEOF detected. Exiting program." << std::endl;
                return (0);
                }
                if (input.empty())
                    std::cout << "Nickname cannot be empty. Please enter a valid nickname." << std::endl;
            } 
            while (input.empty());
            contact.setNickname(input);

            do 
            {
                std::cout << "Enter phone number: ";
                if (!std::getline(std::cin, input)) 
                {
                std::cout << "\nEOF detected. Exiting program." << std::endl;
                return (0);
                }
                if (input.empty())
                    std::cout << "Phone number cannot be empty. Please enter a valid phone number." << std::endl;
            } 
            while (input.empty());
            contact.setPhoneNumber(input);

            do 
            {
                std::cout << "Enter darkest secret: ";
                if (!std::getline(std::cin, input)) 
                {
                std::cout << "\nEOF detected. Exiting program." << std::endl;
                return (0);
                }
                if (input.empty())
                    std::cout << "Darkest secret cannot be empty. Please enter a valid darkest secret." << std::endl;
            }
            while (input.empty());
            contact.setDarkestSecret(input);

            phoneBook.addContact(contact);
        } 
        else if (command == "SEARCH") 
        {
            phoneBook.searchContacts();
            std::cout << "Enter index to display: ";
            int index;
            if (!(std::cin >> index)) 
            {
                std::cout << "\nExiting SEARCH section." << std::endl;
                return 0;
            }
            if (std::cin.fail() || index < 0 || index >= 8) 
            {
                std::cin.clear(); // Clear the error state
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the input
                std::cout << "Invalid index. Please enter a valid index." << std::endl;
            } 
            else 
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
                phoneBook.displayContact(index);
            }
        } 
        else if (command == "EXIT") 
            break;
        else 
            std::cout << "Invalid command." << std::endl;
    }
    return (0);
}
