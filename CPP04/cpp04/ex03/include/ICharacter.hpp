/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:33:45 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:27:04 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class AMateria;

/**
 * @class ICharacter
 * @brief Interface for character classes in the game.
 *
 * This interface defines the basic operations that a character in the game
 * can perform, such as equipping, unequipping, and using Materia.
 */
class ICharacter 
{
    public:
        /**
         * @brief Virtual destructor.
         *
         * Ensures proper cleanup of derived classes.
         */
        virtual ~ICharacter() {}
        
        /**
         * @brief Get the name of the character.
         *
         * @return A constant reference to the name of the character.
         */
        virtual std::string const & getName() const = 0;
        
        /**
         * @brief Equip a Materia.
         *
         * Equips the specified Materia in the character's inventory.
         *
         * @param m The Materia to equip.
         */
        virtual void equip(AMateria* m) = 0;

        /**
         * @brief Unequip a Materia.
         *
         * Unequips the Materia at the specified index without deleting it.
         *
         * @param idx The index of the Materia to unequip.
         */
        virtual void unequip(int idx) = 0;

        /**
         * @brief Use a Materia.
         *
         * Uses the Materia at the specified index on the target character.
         *
         * @param idx The index of the Materia to use.
         * @param target The target character.
         */
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif
