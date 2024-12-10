/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:59:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:28:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

/**
 * @class WrongCat
 * @brief A class representing a wrong cat, derived from WrongAnimal.
 * 
 * The WrongCat class inherits from the WrongAnimal class and provides specific
 * implementations for the wrong cat's behavior, such as making a sound.
 */
class WrongCat : public WrongAnimal 
{
    public:
        WrongCat();                                 ////< Default constructor   
        WrongCat(const WrongCat& other);            ////< Copy constructor
        WrongCat& operator=(const WrongCat& other); ////< Assignment operator
        ~WrongCat();                                ////< Destructor    
        
        void makeSound() const;
};


#endif
