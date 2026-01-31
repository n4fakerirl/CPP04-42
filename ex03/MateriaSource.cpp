/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:47:37 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:48:39 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->stock[i] = NULL;
    //std::cout << "Destructor MateriaSource called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i] == NULL && m != NULL)
        {
            this->stock[i] = m->clone();
            std::cout << this->stock[i]->getType() << "\n";
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    AMateria *new_mat = 0;
    for (int i = 0; i < 4; i++)
        printf("case[%d] : %p\n", i, this->stock[i]);
    for (int i = 0; i < 4; i++)
    {
        printf("STOCK : [%s] | TYPE : [%s]\n", this->stock[i]->getType().c_str(), type.c_str());
        if (this->stock[i] && (this->stock[i]->getType() == type))
        {
            new_mat = this->stock[i]->clone();
            printf("NEW : [%p] | STOCK[%d] : [%p]\n", new_mat, i, this->stock[i]);
        }       
    }
    printf("THIS IS NEW : %p\n", new_mat);
    return (new_mat);
}
