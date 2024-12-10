/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:32:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:39:14 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

/**
 * @brief Default constructor.
 *
 * Constructs a new Cure object with the type set to "cure".
 */
Cure::Cure() : AMateria("cure") {}

/**
 * @brief Copy constructor.
 *
 * Constructs a new Cure object by copying another Cure object.
 *
 * @param other The Cure object to copy.
 */
Cure::Cure(Cure const & other) : AMateria(other) {}

/**
 * @brief Copy assignment operator.
 *
 * Assigns the values from another Cure object to this object.
 *
 * @param other The Cure object to copy.
 * @return A reference to this Cure object.
 */
Cure& Cure::operator=(Cure const & other) 
{
    if (this != &other) 
        AMateria::operator=(other);
    return *this;
}

/**
 * @brief Destructor.
 *
 * Destroys the Cure object.
 */
Cure::~Cure() {}

/**
 * @brief Clone the Cure Materia.
 *
 * Creates a new instance of the Cure Materia.
 *
 * @return A pointer to the new instance of the Cure Materia.
 */
AMateria* Cure::clone() const 
{
    return new Cure(*this);
}

/**
 * @brief Use the Cure Materia on a target.
 *
 * Uses the Cure Materia on the specified target, displaying a message.
 *
 * @param target The target character.
 */
void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
