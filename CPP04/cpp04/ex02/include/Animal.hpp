/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:58:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:40:36 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

/**
 * @class Animal
 * @brief A base class representing an animal.
 * 
 * The Animal class provides a base for different types of animals.
 * It includes a type attribute and methods to get the type and make a sound.
 */
class Animal 
{
    protected:
        std::string type;

    public:
        Animal();                                 ////< Default constructor
        Animal(const Animal& other);              ////< Copy constructor
        Animal& operator=(const Animal& other);   ////< Assignment operator
        virtual ~Animal();                        ////< Destructor    
        
        std::string getType() const;
        virtual void makeSound() const = 0;         ////< Pure virtual function
};

#endif
