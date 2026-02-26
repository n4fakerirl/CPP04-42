/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:42:45 by nova              #+#    #+#             */
/*   Updated: 2026/02/26 16:40:54 by ocviller         ###   ########.fr       */
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
    
    ICharacter *me = new Character("nova");
    ICharacter *bob = new Character("bob");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
    std::cout << "\n\nCHARACTER NOVA INVENTORY\n\n";
    for (int i = 0; i < 4; i++)
        me->use(i, *bob);
    std::cout << "\n\nCHARACTER BOB INVENTORY\n\n";
    *static_cast<Character*>(bob) = *static_cast<Character*>(me);
    for (int i = 0; i < 4; i++)
        bob->use(i, *me);
    tmp = src->createMateria("cure");
    bob->equip(tmp);
    delete tmp;
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    delete tmp;
    me->unequip(0);
    bob->unequip(0);
    std::cout << "\n\nBOTH CHARACTERS INVENTORY AND TRASH\n\n";
    std::cout << "NOVA INVENTORY\n";
    for (int i = 0; i < 4; i++)
        me->use(i, *bob);
    std::cout << "NOVA TRASH\n";
    me->print_trash();
    std::cout << "BOB INVENTORY\n";
    for (int i = 0; i < 4; i++)
        bob->use(i, *me);
    std::cout << "BOB TRASH\n";
    bob->print_trash();
    //DELETE
    delete me;
    delete bob;
    delete src;
    return (0);
}
