/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:47:37 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 20:03:38 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->stock[i];
    //std::cout << "Destructor MateriaSource called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i] == NULL && m != NULL)
        {
            this->stock[i] = m->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    AMateria *new_mat = 0;
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i] && (this->stock[i]->getType() == type))
            new_mat = this->stock[i]->clone();
    }
    return (new_mat);
}
