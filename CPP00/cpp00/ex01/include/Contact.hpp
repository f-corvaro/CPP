/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/11 18:09:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

/**
 * @class Contact
 * @brief A class to represent a contact in a phonebook.
 * 
 * The Contact class stores information about a contact, including:
 * their first name, last name, nickname, phone number, and darkest secret.
 */
class Contact 
{
	private:
	// Member variables (attributes) to store contact information
	
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
	// Member functions (methods) to set and get contact information
	
		void setFirstName(const std::string &firstName);
		void setLastName(const std::string &lastName);
		void setNickname(const std::string &nickname);
		void setPhoneNumber(const std::string &phoneNumber);
		void setDarkestSecret(const std::string &darkestSecret);
	// Member functions (methods) to get the contact information
	
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif
