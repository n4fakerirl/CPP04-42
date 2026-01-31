/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:39:58 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 18:37:28 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
    std::cout << "Destructor IMateriaSource called\n";
}

void IMateriaSource::learnMateria(AMateria *m)
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

AMateria* IMateriaSource::createMateria(std::string const &type)
{
    AMateria *new_mat = NULL;
    
    for (int i = 0; i < 4; i++)
    {
        if (this->stock[i]->getType() == type)
        {
            if (type == "ice")
                new_mat = this->stock[i]->clone();
        }
    }
    return (new_mat);
}
