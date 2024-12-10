/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:31:01 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/10 11:37:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

/**
 * @brief Main function to demonstrate the Materia system.
 *
 * This function creates a Materia source, learns Ice and Cure Materia,
 * creates a character, equips the character with the learned Materia,
 * and uses the Materia on another character.
 *
 * @return int Exit status of the program.
 */
int main() 
{
    // Create a Materia source
    IMateriaSource* src = new MateriaSource();

    // Learn Ice and Cure Materia
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Create a character named "me"
    ICharacter* me = new Character("me");

    // Create and equip Ice Materia
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    // Create and equip Cure Materia
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // Create another character named "bob"
    ICharacter* bob = new Character("bob");

    // Use the equipped Materia on "bob"
    me->use(0, *bob);   // Uses Ice Materia
    me->use(1, *bob);   // Uses Cure Materia

    // Clean up
    delete bob;
    delete me;
    delete src;

    return 0;
}
