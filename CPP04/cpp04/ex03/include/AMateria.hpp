/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:31:49 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:23:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

/**
 * @class AMateria
 * @brief Abstract base class for Materia types.
 *
 * This class represents a Materia in the game. It is an abstract class that
 * provides the basic interface and functionality for all Materia types.
 */
class AMateria 
{
    protected:
        std::string type;
        
    public:
        AMateria();                                     // Default constructor
        AMateria(std::string const & type);             // Parametric constructor
        AMateria(AMateria const & other);               // Copy constructor
        AMateria& operator=(AMateria const & other);    // Copy assignment operator
        virtual ~AMateria();                            // Destructor
    
        std::string const & getType() const;            // Returns the materia type
        virtual AMateria* clone() const = 0;            // Returns a new instance of the materia
        virtual void use(ICharacter& target);           // Uses the materia on the target
};

#endif
