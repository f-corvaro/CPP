/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:32:23 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:30:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

/**
 * @class Ice
 * @brief Concrete class representing an Ice Materia.
 *
 * This class represents an Ice Materia in the game. It inherits from the AMateria class
 * and implements the clone and use functions.
 */
class Ice : public AMateria 
{
    public:
        Ice();                              // Default constructor
        Ice(Ice const & other);             // Copy constructor
        Ice& operator=(Ice const & other);  // Copy assignment operator
        ~Ice();                             // Destructor
        
        AMateria* clone() const;            
        void use(ICharacter& target);
};

#endif
