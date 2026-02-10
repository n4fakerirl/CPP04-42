/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/10 15:59:42 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Cat meow;
    meow.set_ideas("hola!");
    meow.print_ideas();
    Cat copy(meow);
    Cat copycat = copy;
    std::cout << "\nCOPY\n";
    copy.print_ideas();
    std::cout << "\nCOPYCAT\n";
    copycat.print_ideas();
    meow.set_ideas("hey");
    std::cout << "\nprint everyone\n";
    meow.print_ideas();
    copy.print_ideas();
    copycat.print_ideas();
    std::cout << "\nprint everyone again\n";
    copy.set_ideas("test");
    meow.print_ideas();
    copy.print_ideas();
    copycat.print_ideas();
}
