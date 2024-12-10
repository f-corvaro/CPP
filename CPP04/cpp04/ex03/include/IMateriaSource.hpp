/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:34:50 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:28:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

/**
 * @class IMateriaSource
 * @brief Interface for Materia source classes in the game.
 *
 * This interface defines the basic operations that a Materia source in the game
 * can perform, such as learning and creating Materia.
 */
class IMateriaSource 
{
    public:
        /**
         * @brief Virtual destructor.
         *
         * Ensures proper cleanup of derived classes.
         */
        virtual ~IMateriaSource() {}

        /**
         * @brief Learn a new Materia.
         *
         * Copies the Materia passed as a parameter and stores it in memory so it can be cloned later.
         *
         * @param m The Materia to learn.
         */
        virtual void learnMateria(AMateria* m) = 0;

        /**
         * @brief Create a new Materia.
         *
         * Returns a new Materia that is a copy of the Materia previously learned by the MateriaSource
         * whose type matches the one passed as a parameter. Returns nullptr if the type is unknown.
         *
         * @param type The type of the Materia to create.
         * @return A pointer to the new Materia, or nullptr if the type is unknown.
         */
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
