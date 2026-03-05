/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/03/05 15:24:58 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* basic = new Animal();
    if (!basic)
        return (0);
    const Animal* dog = new Dog();
    if (!dog)
        return (delete basic, 0);
    const Animal* cat = new Cat();
    if (!cat)
        return (delete basic, delete dog, 0);
    
    std::cout << "\nTRUE ANIMALS\n\n";
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    basic->makeSound();

    std::cout << "\nWRONG ANIMALS\n\n";
    const WrongAnimal* wrongmeow = new WrongCat();
    const WrongAnimal* wrongani = new WrongAnimal();
    std::cout << "\n" << wrongmeow->getType() << " " << std::endl;
    std::cout << wrongani->getType() << " " << std::endl;
    wrongmeow->makeSound();
    wrongani->makeSound();
    std::cout << "\n";
    std::cout << "\nDELETE TRUE ANIMALS\n\n";
    delete cat;
    delete dog;
    delete basic;
    std::cout << "\nDELETE WRONG ANIMALS\n\n";
    delete wrongani;
    delete wrongmeow;
    return 0;
}
