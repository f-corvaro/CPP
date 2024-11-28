/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:39:06 by fcorvaro         ###   ########.fr       */
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
		PhoneBook();
		void addContact(const Contact &contact);
		void searchContacts() const;
		void displayContact(int index) const;
};

#endif
