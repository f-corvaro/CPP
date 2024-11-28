/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:10:48 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/27 21:05:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"
# include <iostream>

/**
 * @brief Replaces all occurrences of a substring with another substring in the given str.
 * 
 * This function searches for all occurrences of the substring `s1` in the string `str`
 * and replaces them with the substring `s2`.
 * 
 * @param str The string in which to perform the replacements.
 * @param s1 The substring to search for and replace.
 * @param s2 The substring to replace `s1` with.
 */
void replaceOccurrences(std::string &str, const std::string &s1, const std::string &s2) 
{    
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
	{
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}
