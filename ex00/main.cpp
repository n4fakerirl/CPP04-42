/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 15:28:23 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* basic = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

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
