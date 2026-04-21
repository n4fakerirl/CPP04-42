/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/04/21 11:46:28 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(void)
{
    //Animal abstract;
    Animal *ani = new Cat;
    ani->makeSound();
    delete ani;
    Cat meow;
    meow.set_ideas("une idee");
    meow.print_ideas();
    Cat test;
    test = meow;
    test.print_ideas();
    meow.set_ideas("2 idees");
    meow.print_ideas();
    test.print_ideas();
}