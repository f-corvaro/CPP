/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:27:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/**
 * @brief The main function demonstrating the creation and announcement of zombies.
 * 
 * This function demonstrates the difference between stack and heap allocation.
 * 
 * Stack Allocation:
 * - Memory is allocated on the stack.
 * - The lifetime of the allocated memory is limited to the scope in which it is 
 *      created.
 * - Memory is automatically freed when the scope is exited.
 * - Faster allocation and deallocation compared to heap allocation.
 * - Limited by stack size, which can lead to stack overflow for large objects 
 *      or deep recursion.
 * 
 * Heap Allocation:
 * - Memory is allocated on the heap.
 * - The lifetime of the allocated memory is controlled by the programmer.
 * - Memory must be manually freed to avoid memory leaks.
 * - Slower allocation and deallocation compared to stack allocation.
 * - Suitable for large objects and dynamic data structures.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    // Create a zombie on the heap, make it announce itself, and then delete it.
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    // Remember to delete the heap-allocated zombie to avoid memory leaks
    delete heapZombie; 

    // Create a zombie on the stack and announce it
    randomChump("StackZombie");

    return 0;
}
