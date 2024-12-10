/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:32:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:32:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

/**
 * @brief Default constructor.
 *
 * Constructs a new AMateria object with the type set to "default".
 */
AMateria::AMateria() : type("default") {}

/**
 * @brief Parametric constructor.
 *
 * Constructs a new AMateria object with the specified type.
 *
 * @param type The type of the Materia.
 */
AMateria::AMateria(std::string const & type) : type(type) {}

/**
 * @brief Copy constructor.
 *
 * Constructs a new AMateria object by copying another AMateria object.
 *
 * @param other The AMateria object to copy.
 */
AMateria::AMateria(AMateria const & other) : type(other.type) {}

/**
 * @brief Copy assignment operator.
 *
 * Assigns the values from another AMateria object to this object.
 *
 * @param other The AMateria object to copy.
 * @return A reference to this AMateria object.
 */
AMateria& AMateria::operator=(AMateria const & other) 
{
    if (this != &other)
        type = other.type;
    return *this;
}

/**
 * @brief Destructor.
 *
 * Destroys the AMateria object.
 */
AMateria::~AMateria() {}

/**
 * @brief Get the type of the Materia.
 *
 * @return A constant reference to the type of the Materia.
 */
std::string const & AMateria::getType() const 
{
    return type;
}

/**
 * @brief Use the Materia on a target.
 *
 * Uses the Materia on the specified target. This function is a placeholder
 * and does not perform any action in the base class.
 *
 * @param target The target character.
 */
void AMateria::use(ICharacter& target) 
{
    (void)target;
}
