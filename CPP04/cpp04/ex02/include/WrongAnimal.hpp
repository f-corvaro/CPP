/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:59:23 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:41:50 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

/**
 * @class WrongAnimal
 * @brief A base class representing a wrong animal.
 * 
 * The WrongAnimal class provides a base for different types of wrong animals.
 * It includes a type attribute and methods to get the type and make a sound.
 */
class WrongAnimal 
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();                                      ////< Default constructor
        WrongAnimal(const WrongAnimal& other);              ////< Copy constructor
        WrongAnimal& operator=(const WrongAnimal& other);   ////< Assignment operator
        virtual ~WrongAnimal();                             ////< Destructor
        
        std::string getType() const;
        void makeSound() const;
};

#endif
