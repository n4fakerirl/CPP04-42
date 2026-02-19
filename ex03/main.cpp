/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:42:45 by nova              #+#    #+#             */
/*   Updated: 2026/02/19 12:40:05 by ocviller         ###   ########.fr       */
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
    
    src->learnMateria(newice);
    src->learnMateria(newcure);
    delete newice;
    delete newcure;
    
    ICharacter* me = new Character("nova");
    AMateria* tmp;
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
    return 0;
}
