/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:35:25 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:33:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

/**
 * @brief Default constructor.
 *
 * Constructs a new MateriaSource object with an empty template array.
 */
MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; ++i) 
        templates[i] = NULL;
}

/**
 * @brief Copy constructor.
 *
 * Constructs a new MateriaSource object by copying another MateriaSource object.
 *
 * @param other The MateriaSource object to copy.
 */
MateriaSource::MateriaSource(MateriaSource const & other) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (other.templates[i]) 
            templates[i] = other.templates[i]->clone();
        else 
            templates[i] = NULL;
    }
}

/**
 * @brief Copy assignment operator.
 *
 * Assigns the values from another MateriaSource object to this object.
 *
 * @param other The MateriaSource object to copy.
 * @return A reference to this MateriaSource object.
 */
MateriaSource& MateriaSource::operator=(MateriaSource const & other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 4; ++i) 
        {
            if (templates[i]) 
                delete templates[i];
            if (other.templates[i]) 
                templates[i] = other.templates[i]->clone();
            else 
                templates[i] = NULL;
        }
    }
    return *this;
}

/**
 * @brief Destructor.
 *
 * Destroys the MateriaSource object and deletes all learned Materia templates.
 */
MateriaSource::~MateriaSource() 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (templates[i]) 
            delete templates[i];
    }
}

/**
 * @brief Learn a new Materia.
 *
 * Copies the Materia passed as a parameter and stores it in memory so it can be cloned later.
 *
 * @param m The Materia to learn.
 */
void MateriaSource::learnMateria(AMateria* m) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (!templates[i])
        {
            templates[i] = m;
            break;
        }
    }
}

/**
 * @brief Create a new Materia.
 *
 * Returns a new Materia that is a copy of the Materia previously learned by the MateriaSource
 * whose type matches the one passed as a parameter. Returns nullptr if the type is unknown.
 *
 * @param type The type of the Materia to create.
 * @return A pointer to the new Materia, or nullptr if the type is unknown.
 */
AMateria* MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (templates[i] && templates[i]->getType() == type) 
            return templates[i]->clone();
    }
    return NULL;
}
