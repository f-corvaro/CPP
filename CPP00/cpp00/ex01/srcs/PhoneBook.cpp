/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/11 18:34:03 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

/**
 * @brief Constructor to initialize the PhoneBook.
 * 
 * Initializes the currentIndex and totalContacts to 0.
 */
PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

/**
 * @brief Adds a contact to the phonebook.
 * 
 * Adds the given contact to the current index in the contacts array.
 * If the array is full, it overwrites the oldest contact.
 * Updates the currentIndex and totalContacts accordingly.
 * 
 * @param contact The contact to add.
 */
void PhoneBook::addContact(const Contact &contact)
{
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8) 
        totalContacts++;
}

/**
 * @brief Displays a list of all contacts in the phonebook.
 * 
 * This function prints a table of all contacts with their index, first name,
 * last name, and nickname. If any of these fields are longer than 10 characters,
 * they are truncated and a dot is appended.
 */
void PhoneBook::searchContacts() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < totalContacts; i++) 
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
    }
}

/**
 * @brief Displays the details of a specific contact by index.
 * 
 * This function prints the first name, last name, nickname, phone number,
 * and darkest secret of the contact at the given index. If the index is invalid,
 * it prints an error message.
 * 
 * @param index The index of the contact to display.
 */
void PhoneBook::displayContact(int index) const 
{
    if (index < 0 || index >= totalContacts) 
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
