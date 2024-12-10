/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:59:05 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:42:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

/**
 * @class Cat
 * @brief A class representing a cat, derived from Animal.
 * 
 * The Cat class inherits from the Animal class and provides specific
 * implementations for the cat's behavior, such as making a sound.
 */
class Cat : public Animal 
{
    private:
        Brain* brain;   ///< Pointer to the Brain object representing the cat's brain.
        
    public:
        Cat();                              ////< Default constructor
        Cat(const Cat& other);              ////< Copy constructor
        Cat& operator=(const Cat& other);   ////< Assignment operator
        ~Cat();                             ////< Destructor
        
        void makeSound() const;
};

#endif
