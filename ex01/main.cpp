/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/26 15:10:55 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "VIRUTAL TEST\n";
    Animal *test = new Cat();
    test->makeSound();

    std::cout << "ARRAY OF CATS AND DOGS\n";
    Animal *zoo[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            zoo[i] = new Cat();
        else
            zoo[i] = new Dog();
    }
    for (int i = 0; i < 10; i++)
        zoo[i]->makeSound();
    std::cout << "BRAIN TESTS\n";
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    // Cat meow;
    // meow.makeSound();
    // Dog woaf;
    // woaf.makeSound();
    // meow.set_ideas("hola!");
    // meow.print_ideas();
    // Cat copy(meow);
    // Cat copycat = copy;
    // std::cout << "\nCOPY\n";
    // copy.print_ideas();
    // std::cout << "\nCOPYCAT\n";
    // copycat.print_ideas();
    // meow.set_ideas("hey");
    // std::cout << "\nprint everyone\n";
    // meow.print_ideas();
    // copy.print_ideas();
    // copycat.print_ideas();
    // std::cout << "\nprint everyone again\n";
    // copy.set_ideas("test");
    // meow.print_ideas();
    // copy.print_ideas();
    // copycat.print_ideas();
    delete test;
    for (int i = 0; i < 10; i++)
        delete zoo[i];
}

// int main(void)
// {
//     Cat meow;
//     meow.set_ideas("une idee");
//     meow.print_ideas();
//     Cat test;
//     test = meow;
//     test.print_ideas();
//     meow.set_ideas("2 idees");
//     meow.print_ideas();
//     test.print_ideas();
// }
