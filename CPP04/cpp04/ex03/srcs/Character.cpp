/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:34:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:35:35 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

/**
 * @brief Default constructor.
 *
 * Constructs a new Character object with an empty name and an empty inventory.
 */
Character::Character() : name("") 
{
    for (int i = 0; i < 4; ++i) 
        inventory[i] = NULL;
}

/**
 * @brief Parametric constructor.
 *
 * Constructs a new Character object with the specified name and an empty inventory.
 *
 * @param name The name of the character.
 */
Character::Character(std::string const & name) : name(name) 
{
    for (int i = 0; i < 4; ++i) 
        inventory[i] = NULL;
}

/**
 * @brief Copy constructor.
 *
 * Constructs a new Character object by copying another Character object.
 *
 * @param other The Character object to copy.
 */
Character::Character(Character const & other) : name(other.name) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (other.inventory[i]) 
            inventory[i] = other.inventory[i]->clone();
        else 
            inventory[i] = NULL;
    }
}

/**
 * @brief Copy assignment operator.
 *
 * Assigns the values from another Character object to this object.
 *
 * @param other The Character object to copy.
 * @return A reference to this Character object.
 */
Character& Character::operator=(Character const & other) 
{
    if (this != &other) 
    {
        name = other.name;
        for (int i = 0; i < 4; ++i) 
        {
            if (inventory[i]) 
                delete inventory[i];
            if (other.inventory[i]) 
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

/**
 * @brief Destructor.
 *
 * Destroys the Character object and deletes all Materia in the inventory.
 */
Character::~Character() 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (inventory[i]) 
        {
            delete inventory[i];
        }
    }
}

/**
 * @brief Get the name of the character.
 *
 * @return A constant reference to the name of the character.
 */
std::string const & Character::getName() const 
{
    return name;
}

/**
 * @brief Equip a Materia.
 *
 * Equips the specified Materia in the first empty slot of the inventory.
 *
 * @param m The Materia to equip.
 */
void Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (!inventory[i]) 
        {
            inventory[i] = m;
            break;
        }
    }
}

/**
 * @brief Unequip a Materia.
 *
 * Unequips the Materia at the specified index without deleting it.
 *
 * @param idx The index of the Materia to unequip.
 */
void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) 
        inventory[idx] = NULL;
}

/**
 * @brief Use a Materia.
 *
 * Uses the Materia at the specified index on the target character.
 *
 * @param idx The index of the Materia to use.
 * @param target The target character.
 */
void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && inventory[idx]) 
        inventory[idx]->use(target);
}
