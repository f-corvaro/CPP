/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:32:37 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:39:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

/**
 * @brief Default constructor.
 *
 * Constructs a new Ice object with the type set to "ice".
 */
Ice::Ice() : AMateria("ice") {}

/**
 * @brief Copy constructor.
 *
 * Constructs a new Ice object by copying another Ice object.
 *
 * @param other The Ice object to copy.
 */
Ice::Ice(Ice const & other) : AMateria(other) {}

/**
 * @brief Copy assignment operator.
 *
 * Assigns the values from another Ice object to this object.
 *
 * @param other The Ice object to copy.
 * @return A reference to this Ice object.
 */
Ice& Ice::operator=(Ice const & other) 
{
    if (this != &other) 
        AMateria::operator=(other);
    return *this;
}

/**
 * @brief Destructor.
 *
 * Destroys the Ice object.
 */
Ice::~Ice() {}

/**
 * @brief Clone the Ice Materia.
 *
 * Creates a new instance of the Ice Materia.
 *
 * @return A pointer to the new instance of the Ice Materia.
 */
AMateria* Ice::clone() const 
{
    return new Ice(*this);
}

/**
 * @brief Use the Ice Materia on a target.
 *
 * Uses the Ice Materia on the specified target, displaying a message.
 *
 * @param target The target character.
 */
void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
