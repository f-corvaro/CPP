/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:05:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/27 17:35:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

/**
 * @brief Sets the contact's first name.
 * @param firstName The first name to set.
 */
void    Contact::setFirstName(const std::string &firstName)
{
    this->firstName = firstName;
}

/**
 * @brief Sets the contact's last name.
 * @param lastName The last name to set.
 */
void    Contact::setLastName(const std::string &lastName)
{
    this->lastName = lastName;
}

/**
 * @brief Sets the contact's nickname.
 * @param nickname The nickname to set.
 */
void    Contact::setNickname(const std::string &nickname)
{
    this->nickname = nickname;
}

/**
 * @brief Sets the contact's phone number.
 * @param phoneNumber The phone number to set.
 */
void    Contact::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

/**
 * @brief Sets the contact's darkest secret.
 * @param darkestSecret The darkest secret to set.
 */
void    Contact::setDarkestSecret(const std::string &darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

/**
 * @brief Gets the contact's first name.
 * @return The contact's first name.
 */
std::string Contact::getFirstName() const
{
    return firstName;
}

/**
 * @brief Gets the contact's last name.
 * @return The contact's last name.
 */
std::string Contact::getLastName() const
{
    return lastName;
}

/**
 * @brief Gets the contact's nickname.
 * @return The contact's nickname.
 */
std::string Contact::getNickname() const
{
    return nickname;
}

/**
 * @brief Gets the contact's phone number.
 * @return The contact's phone number.
 */
std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

/**
 * @brief Gets the contact's darkest secret.
 * @return The contact's darkest secret.
 */
std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}
