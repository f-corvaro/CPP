/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:34:09 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:24:28 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

/**
 * @class Character
 * @brief Concrete class representing a character in the game.
 *
 * This class implements the ICharacter interface and represents a character
 * that can equip and use Materia.
 */
class Character : public ICharacter 
{
    private:
        std::string name;                               // The name of the character
        AMateria* inventory[4];                         // The inventory of the character, containing up to 4 Materia
        
    public:
        Character();                                    // Default constructor
        Character(std::string const & name);            // Parametric constructor
        Character(Character const & other);             // Copy constructor
        Character& operator=(Character const & other);  // Copy assignment operator
        ~Character();                                   // Destructor     

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
