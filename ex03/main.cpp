/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:42:45 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:03:22 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    printf("1\n");
    IMateriaSource* src = new MateriaSource();
    printf("2\n");
    src->learnMateria(new Ice());
    printf("3\n");
    src->learnMateria(new Cure());
    printf("4\n");
    ICharacter* me = new Character("me");
    printf("5\n");
    AMateria* tmp;
    printf("6\n");
    tmp = src->createMateria("ice");
    (void)tmp;
    // printf("7\n");
    // me->equip(tmp);
    // printf("8\n");
    // tmp = src->createMateria("cure");
    // printf("9\n");
    // me->equip(tmp);
    // printf("10\n");
    // ICharacter* bob = new Character("bob");
    // printf("11\n");
    // me->use(0, *bob);
    // printf("12\n");
    // me->use(1, *bob);
    // printf("13\n");
    //delete bob;
    delete me;
    delete src;
    return 0;
}