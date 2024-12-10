/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:14:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 18:07:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

/**
 * @class Brain
 * @brief A class representing a brain with an array of ideas.
 * 
 * The Brain class contains an array of 100 strings representing ideas.
 */
class Brain 
{
    public:
        std::string ideas[100];

        Brain();                                ////< Default constructor
        Brain(const Brain& other);              ////< Copy constructor
        Brain& operator=(const Brain& other);   ////< Assignment operator
        ~Brain();                               ////< Destructor
};

#endif
