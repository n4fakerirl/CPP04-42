/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:47:37 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:03:41 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i] == NULL && m != NULL)
        {
            this->stock[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    printf("hey");
    AMateria *new_mat = 0;
    printf("ici ?");
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i]->getType() == type)
        {
            if (type == "ice")
            {
                printf("ici ?");
                new_mat = this->stock[i]->clone();
            }
        }
    }
    return (new_mat);
}
