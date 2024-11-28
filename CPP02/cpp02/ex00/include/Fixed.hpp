/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:42:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:35:56 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/**
 * @class Fixed
 * @brief A class that represents a fixed-point number.
 * 
 * The Fixed class provides a representation of fixed-point numbers with a specific
 * number of fractional bits. It includes constructors, a destructor, and member
 * functions to get and set the raw value of the fixed-point number.
 * 
 * The Fixed class in your program represents fixed-point numbers using an integer to store the value, 
 * with a specific number of bits dedicated to the fractional part. The `_fractionalBits` member specifies 
 * how many bits are used for the fractional part. In this case, `_fractionalBits` is set to 8, meaning 8 bits 
 * are used for the fractional part.
 * 
 * ### Range of Numbers
 * 
 * The range of numbers that the Fixed class can handle depends on the size of the integer used to store the value. 
 * Assuming the integer is a 32-bit signed integer (which is typical for `int` in many systems), the range of the integer 
 * part can be calculated as follows:
 * 
 * 1. **Integer Part**:
 *    - The total number of bits is 32.
 *    - The number of bits for the fractional part is 8.
 *    - Therefore, the number of bits for the integer part is `32 - 8 = 24`.
 * 
 * 2. **Range of the Integer Part**:
 *    - The range of a 24-bit signed integer is from `-2^(24-1)` to `2^(24-1) - 1`.
 *    - This gives a range of `-8,388,608` to `8,388,607`.
 * 
 * 3. **Fractional Part**:
 *    - The fractional part is represented by 8 bits.
 *    - This means the smallest step size (or precision) is `1 / 2^8 = 1 / 256 ≈ 0.00390625`.
 * 
 * ### Example Values
 * 
 * - **Maximum Positive Value**:
 *   - Integer part: `8,388,607`
 *   - Fractional part: `0.99609375` (since the maximum fractional value is `255 / 256`)
 *   - Maximum value: `8,388,607 + 0.99609375 = 8,388,607.99609375`
 * 
 * - **Minimum Negative Value**:
 *   - Integer part: `-8,388,608`
 *   - Fractional part: `0` (since the fractional part is always positive)
 *   - Minimum value: `-8,388,608`
 * 
 * ### Summary
 * 
 * The Fixed class can handle numbers in the range of approximately `-8,388,608` to `8,388,607.99609375` with a precision of `0.00390625`.
 * 
 */
class Fixed 
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(); // Default constructor
		Fixed(const Fixed &other); // Copy constructor
		Fixed &operator=(const Fixed &other); // Copy assignment operator
		~Fixed(); // Destructor

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
