/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:42:45 by nova              #+#    #+#             */
/*   Updated: 2026/02/23 12:41:21 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    Ice *newice = new Ice();
    Cure *newcure = new Cure();
    IMateriaSource *copy(src);
    
    src->learnMateria(newice);
    copy->learnMateria(newice);
    src->learnMateria(newcure);
    copy->learnMateria(newcure);
    delete newice;
    delete newcure;
    
    ICharacter* me = new Character("nova");
    AMateria* tmp;
    AMateria* boule;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    delete tmp;
    
    std::cout << me->getName() << " materia user :\n\n";
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "\nCECI EST TEST\n\n";
    boule = copy->createMateria("ice");
    me->equip(boule);
    me->use(2, *bob);
    delete boule;
    std::cout << "\n\nTEST FINI\n";
    me->unequip(0);
    me->print_trash();
    me->use(0, *bob);
    me->unequip(1);
    me->print_trash();
    ICharacter* other;
    other = me;
    std::cout << "\n\nOTHER COPY\n\n";
    tmp = src->createMateria("cure");
    other->equip(tmp);
    delete tmp;
    other->use(0, *me);
    other->unequip(0);
    other->print_trash();
    delete bob;
    delete me;
    delete src;
    delete copy;
    return 0;
}
