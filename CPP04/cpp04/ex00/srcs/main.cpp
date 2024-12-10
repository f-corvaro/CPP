/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:57:52 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:40:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

/**
 * @brief Main function to test the Animal, Dog, Cat, WrongAnimal, and WrongCat classes.
 * 
 * This function creates instances of Animal, Dog, Cat, WrongAnimal, and WrongCat,
 * and demonstrates polymorphism by calling their makeSound() methods and displaying their types.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    // Create instances of Animal, Dog, and Cat
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Display the types of Dog and Cat
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    // Call makeSound() methods
    j->makeSound(); // will output the dog sound!
    i->makeSound(); // will output the cat sound!
    meta->makeSound(); // will output the animal sound!

    // Clean up
    delete meta;
    delete j;
    delete i;

    // Create instances of WrongAnimal and WrongCat
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    // Call makeSound() methods
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound(); // will output the WrongAnimal sound!

    // Clean up
    delete wrongMeta;
    delete wrongI;

    return 0;
}
