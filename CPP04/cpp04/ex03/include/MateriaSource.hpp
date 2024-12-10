/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:35:05 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:30:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

/**
 * @class MateriaSource
 * @brief Concrete class representing a source of Materia.
 *
 * This class implements the IMateriaSource interface and represents a source
 * that can learn and create Materia.
 */
class MateriaSource : public IMateriaSource 
{
    private:
        AMateria* templates[4];
        
    public:
        MateriaSource();                                        // Default constructor
        MateriaSource(MateriaSource const & other);             // Copy constructor
        MateriaSource& operator=(MateriaSource const & other);  // Copy assignment operator
        ~MateriaSource();                                       // Destructor
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif
