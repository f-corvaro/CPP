/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:33:01 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:30:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

/**
 * @class Cure
 * @brief Concrete class representing a Cure Materia.
 *
 * This class represents a Cure Materia in the game. It inherits from the AMateria class
 * and implements the clone and use functions.
 */
class Cure : public AMateria 
{
    public:
        Cure();                                 // Default constructor
        Cure(Cure const & other);               // Copy constructor
        Cure& operator=(Cure const & other);    // Copy assignment operator
        ~Cure();                                // Destructor
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
