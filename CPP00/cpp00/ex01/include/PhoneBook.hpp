/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/11 16:54:50 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

/**
 * @class PhoneBook
 * @brief A class to manage a collection of contacts in a phonebook.
 * 
 * The PhoneBook class allows adding, searching, and displaying contacts.
 * It maintains an array of contacts and keeps track of the current index
 * and the total number of contacts.
 */
class PhoneBook 
{
	private:
		Contact contacts[8];
		int currentIndex; 
		int totalContacts;
 
	public:
		/**
		 * @brief Constructor to initialize the phonebook.
		*/
		PhoneBook();
		/**
         * @brief Adds a contact to the phonebook.
         * @param contact The contact to add.
         */
		void addContact(const Contact &contact);
		/**
         * @brief Searches and displays all contacts in the phonebook.
         */
		void searchContacts() const;
		/**
         * @brief Displays a specific contact by index.
         * @param index The index of the contact to display.
         */
		void displayContact(int index) const;
};

#endif